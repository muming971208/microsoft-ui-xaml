﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "ResourceAccessor.h"
#include "NumberBox.h"
#include "NumberBoxAutomationPeer.h"
#include "Utils.h"

NumberBoxAutomationPeer::NumberBoxAutomationPeer(winrt::NumberBox const& owner)
    : ReferenceTracker(owner)
{
}

// IAutomationPeerOverrides
winrt::IInspectable NumberBoxAutomationPeer::GetPatternCore(winrt::PatternInterface const& patternInterface)
{
    if (patternInterface == winrt::PatternInterface::RangeValue)
    {
        return *this;
    }

    return __super::GetPatternCore(patternInterface);
}

hstring NumberBoxAutomationPeer::GetClassNameCore()
{
    return winrt::hstring_name_of<winrt::NumberBox>();
}

winrt::AutomationControlType NumberBoxAutomationPeer::GetAutomationControlTypeCore()
{
    return winrt::AutomationControlType::Spinner;
}

com_ptr<NumberBox> NumberBoxAutomationPeer::GetImpl()
{
    com_ptr<NumberBox> impl = nullptr;

    if (auto numberBox = Owner().try_as<winrt::NumberBox>())
    {
        impl = winrt::get_self<NumberBox>(numberBox)->get_strong();
    }

    return impl;
}

// IRangeValueProvider
double NumberBoxAutomationPeer::Minimum()
{
    return GetNumberBox().Minimum();
}

double NumberBoxAutomationPeer::Maximum()
{
    return GetNumberBox().Maximum();
}

double NumberBoxAutomationPeer::Value()
{
    // ### also need to notify when value changes -- check RatingControl
    return GetNumberBox().Value();
}

double NumberBoxAutomationPeer::SmallChange()
{
    return GetNumberBox().Step();
}

double NumberBoxAutomationPeer::LargeChange()
{
    return GetNumberBox().Step();
}

void NumberBoxAutomationPeer::SetValue(double value)
{
    GetNumberBox().Value(value);
}
