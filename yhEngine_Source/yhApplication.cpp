#include "yhApplication.h"

namespace yh
{

    Application::Application()
        : mHwnd(nullptr)
        , mHdc(nullptr)
       /* , mSpeed(0.0f)
        , mX(0.0f)
        , mY(0.0f)*/
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

    }
    void Application::Run()
    {
        Update();
        LateUpdate();
        Render();
    }


    void Application::Update()
    {
        /*mSpeed += 0.01f;

        if (GetAsyncKeyState(VK_LEFT) & 0x8000)
        {
            mX -= 0.01f;
        }

        if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
        {
            mX += 0.01f;
        }

        if (GetAsyncKeyState(VK_UP) & 0x8000)
        {
            mY -= 0.01f;
        }

        if (GetAsyncKeyState(VK_DOWN) & 0x8000)
        {
            mY += 0.01f;
        }*/
        mPlayer.Update();

    }
    void Application::LateUpdate()
    {

    }
    void Application::Render()
    {

        Rectangle(mHdc, 500, 500, 600, 600);

        /*HBRUSH blueBrush = CreateSolidBrush(RGB(0, 0, 255));

       
        HBRUSH oldBrush = (HBRUSH)SelectObject(mHdc, blueBrush);

        HPEN redPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
        HPEN oldPen = (HPEN)SelectObject(mHdc, redPen);
        SelectObject(mHdc, oldPen);

        Rectangle(mHdc, 100 + mX, 100 + mY, 200 + mX, 200 + mY);

        SelectObject(mHdc, oldBrush);
        DeleteObject(blueBrush);
        DeleteObject(redPen);*/
        mPlayer.Render(mHdc);
    }
}