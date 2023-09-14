#include <iostream>
#include <string>
#include <chrono>

class Time
{
    public:
        Time
        (
            std::chrono::milliseconds milliseconds,
            std::chrono::seconds seconds,
            std::chrono::minutes minutes,
            std::chrono::hours hours,
            std::chrono::days days,
            std::chrono::months months,
            std::chrono::years years
        ) : mMilliseconds(milliseconds), mSeconds(seconds), mMinutes(minutes), mHours(hours),
            mDays(days), mMonths(months), mYears(years)
        {}



    private:
        std::string mName{ };
        std::chrono::milliseconds mMilliseconds{ };
        std::chrono::seconds mSeconds{ };
        std::chrono::minutes mMinutes{ };
        std::chrono::hours mHours{ };
        std::chrono::days mDays{ };
        std::chrono::months mMonths{ };
        std::chrono::years mYears{ };
};

int main()
{
    std::cout << "Hello World!\n";
}