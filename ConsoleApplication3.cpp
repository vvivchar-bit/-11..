#include <iostream>
#include <memory>
using namespace std;

class Button {
public:
    virtual void render() = 0;
    virtual ~Button() = default;
};

class Checkbox {
public:
    virtual void render() = 0;
    virtual ~Checkbox() = default;
};

class WindowsButton : public Button {
public:
    void render() override {
        cout << "Rendering Windows button..." << endl;
    }
};

class WindowsCheckbox : public Checkbox {
public:
    void render() override {
        cout << "Rendering Windows checkbox..." << endl;
    }
};

class MacButton : public Button {
public:
    void render() override {
        cout << "Rendering Mac button..." << endl;
    }
};

class MacCheckbox : public Checkbox {
public:
    void render() override {
        cout << "Rendering Mac checkbox..." << endl;
    }
};

class GUIFactory {
public:
    virtual unique_ptr<Button> createButton() = 0;
    virtual unique_ptr<Checkbox> createCheckbox() = 0;
    virtual ~GUIFactory() = default;
};

class WindowsFactory : public GUIFactory {
public:
    unique_ptr<Button> createButton() override {
        return make_unique<WindowsButton>();
    }

    unique_ptr<Checkbox> createCheckbox() override {
        return make_unique<WindowsCheckbox>();
    }
};

class MacFactory : public GUIFactory {
public:
    unique_ptr<Button> createButton() override {
        return make_unique<MacButton>();
    }

    unique_ptr<Checkbox> createCheckbox() override {
        return make_unique<MacCheckbox>();
    }
};

void createInterface(GUIFactory& factory) {
    unique_ptr<Button> button = factory.createButton();
    unique_ptr<Checkbox> checkbox = factory.createCheckbox();

    button->render();
    checkbox->render();
}

int main() {
    WindowsFactory windowsFactory;
    MacFactory macFactory;

    cout << "Windows interface:" << endl;
    createInterface(windowsFactory);

    cout << endl;

    cout << "Mac interface:" << endl;
    createInterface(macFactory);

    return 0;
}
