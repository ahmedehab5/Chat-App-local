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
            namespace Controls {
                ref class Grid;
                ref class Button;
                ref class Image;
            }
        }
    }
}

namespace Chat_uwp
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class Entry : public ::Windows::UI::Xaml::Controls::Page, 
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
    
        class Entry_obj1_Bindings;
    
        private: ::Windows::UI::Xaml::Controls::Grid^ Content_grid;
        private: ::Windows::UI::Xaml::Controls::Button^ status_btn;
        private: ::Windows::UI::Xaml::Controls::Button^ chat_btn;
        private: ::Windows::UI::Xaml::Controls::Button^ contacts_btn;
        private: ::Windows::UI::Xaml::Controls::Button^ settings_btn;
        private: ::Windows::UI::Xaml::Controls::Button^ logout_btn;
        private: ::Windows::UI::Xaml::Controls::Image^ image_image;
    };
}

