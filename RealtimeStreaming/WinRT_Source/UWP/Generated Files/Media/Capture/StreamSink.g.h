﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Media.Capture.h"
#include "winrt/Windows.Media.MediaProperties.h"
#include "winrt/Windows.Media.h"
#include "winrt/Windows.Media.Effects.h"
#include "winrt/CameraCapture.Media.Capture.h"

namespace winrt::CameraCapture::Media::Capture::implementation {

template <typename D, typename... I>
struct WINRT_EBO StreamSink_base : implements<D, CameraCapture::Media::Capture::IStreamSink, Windows::Media::IMediaExtension, I...>
{
    using base_type = StreamSink_base;
    using class_type = CameraCapture::Media::Capture::StreamSink;
    using implements_type = typename StreamSink_base::implements_type;
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
        return L"CameraCapture.Media.Capture.StreamSink";
    }
};

}

namespace winrt::CameraCapture::Media::Capture::factory_implementation {

template <typename D, typename T, typename... I>
struct WINRT_EBO StreamSinkT : implements<D, Windows::Foundation::IActivationFactory, CameraCapture::Media::Capture::IStreamSinkFactory, I...>
{
    hstring GetRuntimeClassName() const
    {
        return L"CameraCapture.Media.Capture.StreamSink";
    }

    Windows::Foundation::IInspectable ActivateInstance() const
    {
        throw hresult_not_implemented();
    }

    CameraCapture::Media::Capture::StreamSink CreateInstance(uint8_t index, Windows::Media::MediaProperties::IMediaEncodingProperties const& encodingProperties, CameraCapture::Media::Capture::Sink const& parent)
    {
        return make<T>(index, encodingProperties, parent);
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_STREAMSINK_XAML_G_H) || __has_include("Media/Capture/StreamSink.xaml.g.h")

#include "Media/Capture/StreamSink.xaml.g.h"

#else

namespace winrt::CameraCapture::Media::Capture::implementation
{
    template <typename D, typename... I>
    using StreamSinkT = StreamSink_base<D, I...>;
}

#endif
