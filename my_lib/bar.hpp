#pragma once

namespace bar
{
    constexpr int my_int{5};
}

static_assert(bar::my_int == 5);
