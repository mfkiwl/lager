//
// lager - library for functional interactive c++ programs
// Copyright (C) 2017 Juan Pedro Bolivar Puente
//
// This file is part of lager.
//
// lager is free software: you can redistribute it and/or modify
// it under the terms of the MIT License, as detailed in the LICENSE
// file located at the root of this source code distribution,
// or here: <https://github.com/arximboldi/lager/blob/master/LICENSE>
//

#include "cerealize.hpp"
#include <catch.hpp>
#include <lager/extra/cereal/immer_box.hpp>

TEST_CASE("basic")
{
    auto x = immer::box<int>{42};
    auto y = cerealize(x);
    CHECK(x == y);
}
