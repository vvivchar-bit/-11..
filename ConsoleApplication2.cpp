#include <iostream>
#include <memory>
using namespace std;

class Document {
public:
    virtual void open() = 0;
    virtual ~Document() = default;
};

class PdfDocument : public Document {
public:
    void open() override {
        cout << "Opening PDF document..." << endl;
    }
};

class WordDocument : public Document {
public:
    void open() override {
        cout << "Opening Word document..." << endl;
    }
};

class DocumentCreator {
public:
    virtual unique_ptr<Document> createDocument() = 0;
    virtual ~DocumentCreator() = default;
};

class PdfDocumentCreator : public DocumentCreator {
public:
    unique_ptr<Document> createDocument() override {
        return make_unique<PdfDocument>();
    }
};

class WordDocumentCreator : public DocumentCreator {
public:
    unique_ptr<Document> createDocument() override {
        return make_unique<WordDocument>();
    }
};

int main() {
    unique_ptr<DocumentCreator> creator = make_unique<PdfDocumentCreator>();
    unique_ptr<Document> document = creator->createDocument();

    document->open();

    creator = make_unique<WordDocumentCreator>();
    document = creator->createDocument();

    document->open();

    return 0;
}
