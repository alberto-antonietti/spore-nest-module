/*
 * This file is part of SPORE.
 *
 * Copyright (C) 2016, the SPORE team (see AUTHORS).
 *
 * SPORE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * SPORE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SPORE.  If not, see <http://www.gnu.org/licenses/>.
 *
 * For more information see: https://github.com/IGITUGraz/spore-nest-module
 *
 * File:   test_tracing_node.h
 * Author: Kappel
 *
 * Created on November 9, 2016, 5:03 PM
 */

#ifndef TEST_TRACING_NODE_H
#define TEST_TRACING_NODE_H

#include "spore_test_base.h"

namespace spore
{

/**
 * @brief Test class for TracingNode.
 */
class TestTracingNode : public SporeTestBase
{
public:
    TestTracingNode();

    virtual double get_trace(nest::delay time_step, TracingNode::trace_id id)
    {
        return double(time_step + id);
    };

    virtual size_t get_num_traces() const
    {
        return 5;
    };

    virtual void check(nest::delay time_step, TracingNode* node);
};

}

#endif
