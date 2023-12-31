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
                ref class TextBox;
                ref class Button;
                ref class CheckBox;
                ref class Image;
            }
        }
    }
}

namespace Chat_uwp
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class EditUC : public ::Windows::UI::Xaml::Controls::UserControl, 
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
    
        class EditUC_obj1_Bindings;
    
        private: ::Windows::UI::Xaml::Controls::TextBox^ newDiscription_txt;
        private: ::Windows::UI::Xaml::Controls::Button^ edit_btn;
        private: ::Windows::UI::Xaml::Controls::CheckBox^ visiblity_check;
        private: ::Windows::UI::Xaml::Controls::Button^ addImage_btn;
        private: ::Windows::UI::Xaml::Controls::Button^ load_btn;
        private: ::Windows::UI::Xaml::Controls::Image^ image_image;
    };
}

