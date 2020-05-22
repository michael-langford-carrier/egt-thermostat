#include <egt/ui>
 
int main()
{
    egt::Application app;
 
    egt::TopWindow window;
    egt::Button button(window, "Press Me");
    egt::center(button);
    window.show();
 
    return app.run();
}
