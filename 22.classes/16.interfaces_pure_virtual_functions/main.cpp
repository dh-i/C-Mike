#include <iostream>

class IRenderer{
    public:
        //This, is a pure virtual function
        virtual void Draw() = 0;
        virtual void Update() = 0;
};

class OpenGL : public IRenderer{
    public:
        void Draw() override{
            std::cout << "OpenGL::Draw" << std::endl;
        }
        void Update() override{
            std::cout << "OpenGL::Update" << std::endl;
        }
};

class Vulkan: public IRenderer{
    public:
        void Draw() override{
            std::cout << "Vulkan::Draw" << std::endl;
        }
        void Update() override{
            std::cout << "Vulkan::Update" << std::endl;
        }
};

int main(){
    IRenderer* myRenderer = new Vulkan;

    myRenderer->Draw();
    myRenderer->Update();
}

//Abstract classes don't exist in c++, but the above is the workaround