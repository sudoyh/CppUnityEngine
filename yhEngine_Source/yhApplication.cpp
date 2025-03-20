#include "yhApplication.h"
#include "yhInput.h"

namespace yh
{

    Application::Application()
        : mHwnd(nullptr)
        , mHdc(nullptr)
       
      

    {

    }
    Application::~Application()
    {

    }

    void Application::Initialize(HWND hwnd)
    {
        mHwnd = hwnd;
        mHdc = GetDC(hwnd);

        mPlayer.SetPosition(0, 0);
        Input::Initailize();

    }
    void Application::Run()
    {
        Update();
        LateUpdate();
        Render();
    }


    void Application::Update()
    {
        Input::Update();
        mPlayer.Update();

    }
    void Application::LateUpdate()
    {

    }
    void Application::Render()
    {

        Rectangle(mHdc, 500, 500, 600, 600);

        
        mPlayer.Render(mHdc);
    }
}