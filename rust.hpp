#include <print>
#include <vector>
#include <type_traits>
#include <string>
#include <cstdint>

#define fn ;auto
#define let auto
#define mut

#define match switch(
#define if if(
#define while while(
#define for for(auto&&
#define in :
#define ‌ )

#define   break;case
#define ｜ :case
#define _ break;default

#define   return
#define 　 ;

#define new new_fn

#define main() main() -> int


using std::print;
using std::println;

using i8  = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;
using u8  = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;
using f32 = float;
using f64 = double;

f32 operator ""_f32(long double x) {
    return (f32)x;
}

struct
{
    template<typename... Args>
    auto operator[](Args&&... args) const
    {
        return std::vector{std::forward<Args>(args)...};
    }
} vec;

class String : public std::string
{
    public:
        static String new_fn()
        {
            return {};
        }

        using std::string::string;

        void push(char c)
        {
            push_back(c);
        }
};

template<>
struct std::formatter<String, char> : std::formatter<std::string, char> {};
