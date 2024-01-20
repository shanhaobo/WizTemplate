#include "../../../../Inc/00_WIZ_Library/01_Basic/05_Mem/WizBasicMemRecorder.hpp"

namespace Wiz
{
    namespace MemRecorder
    {
        namespace Item
        {
            WIZ_STRUCT
            {

            };
        } /// end of namespace Item

        WIZ_CLASS
        {
        public:
            void Alloc(void* ptr, size_t sz, const char* file = 0, size_t ln = 0, const char* func = 0){};
            void Dealloc(void* ptr){};

            static ref Get()
            {
                static type mgr;

                return mgr;
            }
        };


        void Alloc(void* ptr, size_t sz, const char* file, size_t ln, const char* func)
        {
            type::Get().Alloc(ptr, sz, file, ln, func);
        }

        void Dealloc(void* ptr)
        {
            type::Get().Dealloc(ptr);
        }
    } /// end of namespace MemRecorder
} /// end of namespace Wiz

