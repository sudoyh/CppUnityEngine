#pragma once
#include "CommonInclude.h"
#include "yhGameObject.h"

namespace yh {

        class Application
        {
        public:
            Application();
            ~Application();

            void Initialize(HWND hwnd);
            void Run();

            void Update();
            void LateUpdate();
            void Render();


        private:
            HWND mHwnd;
            HDC mHdc;

           /* float mSpeed;
            float mX;
            float mY;*/

            GameObject mPlayer;

	};
}

