// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class InfoBarProperties
{
public:
    InfoBarProperties();

    void ActionButtonCommand(winrt::ICommand const& value);
    winrt::ICommand ActionButtonCommand();

    void ActionButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable ActionButtonCommandParameter();

    void ActionButtonContent(winrt::IInspectable const& value);
    winrt::IInspectable ActionButtonContent();

    void ActionButtonStyle(winrt::Style const& value);
    winrt::Style ActionButtonStyle();

    void CloseButtonCommand(winrt::ICommand const& value);
    winrt::ICommand CloseButtonCommand();

    void CloseButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable CloseButtonCommandParameter();

    void HyperlinkButtonContent(winrt::IInspectable const& value);
    winrt::IInspectable HyperlinkButtonContent();

    void IconSource(winrt::IconSource const& value);
    winrt::IconSource IconSource();

    void IsOpen(bool value);
    bool IsOpen();

    void Message(winrt::hstring const& value);
    winrt::hstring Message();

    void Severity(winrt::InfoBarSeverity const& value);
    winrt::InfoBarSeverity Severity();

    void ShowCloseButton(bool value);
    bool ShowCloseButton();

    void Title(winrt::hstring const& value);
    winrt::hstring Title();

    static winrt::DependencyProperty ActionButtonCommandProperty() { return s_ActionButtonCommandProperty; }
    static winrt::DependencyProperty ActionButtonCommandParameterProperty() { return s_ActionButtonCommandParameterProperty; }
    static winrt::DependencyProperty ActionButtonContentProperty() { return s_ActionButtonContentProperty; }
    static winrt::DependencyProperty ActionButtonStyleProperty() { return s_ActionButtonStyleProperty; }
    static winrt::DependencyProperty CloseButtonCommandProperty() { return s_CloseButtonCommandProperty; }
    static winrt::DependencyProperty CloseButtonCommandParameterProperty() { return s_CloseButtonCommandParameterProperty; }
    static winrt::DependencyProperty HyperlinkButtonContentProperty() { return s_HyperlinkButtonContentProperty; }
    static winrt::DependencyProperty IconSourceProperty() { return s_IconSourceProperty; }
    static winrt::DependencyProperty IsOpenProperty() { return s_IsOpenProperty; }
    static winrt::DependencyProperty MessageProperty() { return s_MessageProperty; }
    static winrt::DependencyProperty SeverityProperty() { return s_SeverityProperty; }
    static winrt::DependencyProperty ShowCloseButtonProperty() { return s_ShowCloseButtonProperty; }
    static winrt::DependencyProperty TitleProperty() { return s_TitleProperty; }

    static GlobalDependencyProperty s_ActionButtonCommandProperty;
    static GlobalDependencyProperty s_ActionButtonCommandParameterProperty;
    static GlobalDependencyProperty s_ActionButtonContentProperty;
    static GlobalDependencyProperty s_ActionButtonStyleProperty;
    static GlobalDependencyProperty s_CloseButtonCommandProperty;
    static GlobalDependencyProperty s_CloseButtonCommandParameterProperty;
    static GlobalDependencyProperty s_HyperlinkButtonContentProperty;
    static GlobalDependencyProperty s_IconSourceProperty;
    static GlobalDependencyProperty s_IsOpenProperty;
    static GlobalDependencyProperty s_MessageProperty;
    static GlobalDependencyProperty s_SeverityProperty;
    static GlobalDependencyProperty s_ShowCloseButtonProperty;
    static GlobalDependencyProperty s_TitleProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnSeverityPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnShowCloseButtonPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
