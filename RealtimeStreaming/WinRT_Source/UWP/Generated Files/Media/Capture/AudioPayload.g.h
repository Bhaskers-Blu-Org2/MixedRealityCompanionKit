﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Media.Capture.h"
#include "winrt/Windows.Media.MediaProperties.h"
#include "winrt/Windows.Media.h"
#include "winrt/Windows.Media.Effects.h"
#include "winrt/CameraCapture.Media.Capture.h"

namespace winrt::CameraCapture::Media::Capture::implementation {

template <typename D, typename B, typename... I>
struct WINRT_EBO AudioPayload_base : implements<D, CameraCapture::Media::Capture::IAudioPayload, B, no_module_lock, I...>
{
    using base_type = AudioPayload_base;
    using class_type = CameraCapture::Media::Capture::AudioPayload;
    using implements_type = typename AudioPayload_base::implements_type;
    using implements_type::implements_type;
    
    operator class_type() const noexcept
    {
        static_assert(std::is_same_v<typename impl::implements_default_interface<D>::type, impl::default_interface_t<class_type>>);
        class_type result{ nullptr };
        attach_abi(result, detach_abi(static_cast<impl::default_interface_t<class_type>>(*this)));
        return result;
    }

    hstring GetRuntimeClassName() const
    {
        return L"CameraCapture.Media.Capture.AudioPayload";
    }
};

}

namespace winrt::CameraCapture::Media::Capture::factory_implementation {

template <typename D, typename T, typename... I>
struct WINRT_EBO AudioPayloadT : implements<D, Windows::Foundation::IActivationFactory, I...>
{
    hstring GetRuntimeClassName() const
    {
        return L"CameraCapture.Media.Capture.AudioPayload";
    }

    Windows::Foundation::IInspectable ActivateInstance() const
    {
        return make<T>();
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_AUDIOPAYLOAD_XAML_G_H) || __has_include("Media/Capture/AudioPayload.xaml.g.h")

#include "Media/Capture/AudioPayload.xaml.g.h"

#else

namespace winrt::CameraCapture::Media::Capture::implementation
{
    template <typename D, typename... I>
    using AudioPayloadT = AudioPayload_base<D, I...>;
}

#endif
