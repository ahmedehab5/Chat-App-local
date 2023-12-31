﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Media {
                namespace Animation {
                    ref class Storyboard;
                }
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class TextBlock;
                ref class StackPanel;
                ref class TextBox;
                ref class PasswordBox;
                ref class Button;
            }
        }
    }
}

namespace Chat_uwp
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
        void DisconnectUnloadedObject(int connectionId);
    
    private:
        bool _contentLoaded;
    
        class MainPage_obj1_Bindings;
    
        private: ::Windows::UI::Xaml::Media::Animation::Storyboard^ Storyboard1;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ textBlock;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ stackPanel;
        private: ::Windows::UI::Xaml::Controls::TextBox^ phoneNumber_txt;
        private: ::Windows::UI::Xaml::Controls::PasswordBox^ password_txt;
        private: ::Windows::UI::Xaml::Controls::Button^ login_btn;
        private: ::Windows::UI::Xaml::Controls::Button^ createAcc_btn;
    };
}

