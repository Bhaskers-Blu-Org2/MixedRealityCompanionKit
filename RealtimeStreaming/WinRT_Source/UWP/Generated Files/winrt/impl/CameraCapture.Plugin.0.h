﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial {

struct SpatialCoordinateSystem;

}

WINRT_EXPORT namespace winrt::CameraCapture::Plugin {

struct ICaptureEngine;
struct IModule;
struct IModuleFactory;
struct CaptureEngine;
struct Module;

}

namespace winrt::impl {

template <> struct category<CameraCapture::Plugin::ICaptureEngine>{ using type = interface_category; };
template <> struct category<CameraCapture::Plugin::IModule>{ using type = interface_category; };
template <> struct category<CameraCapture::Plugin::IModuleFactory>{ using type = interface_category; };
template <> struct category<CameraCapture::Plugin::CaptureEngine>{ using type = class_category; };
template <> struct category<CameraCapture::Plugin::Module>{ using type = class_category; };
template <> struct name<CameraCapture::Plugin::ICaptureEngine>{ static constexpr auto & value{ L"CameraCapture.Plugin.ICaptureEngine" }; };
template <> struct name<CameraCapture::Plugin::IModule>{ static constexpr auto & value{ L"CameraCapture.Plugin.IModule" }; };
template <> struct name<CameraCapture::Plugin::IModuleFactory>{ static constexpr auto & value{ L"CameraCapture.Plugin.IModuleFactory" }; };
template <> struct name<CameraCapture::Plugin::CaptureEngine>{ static constexpr auto & value{ L"CameraCapture.Plugin.CaptureEngine" }; };
template <> struct name<CameraCapture::Plugin::Module>{ static constexpr auto & value{ L"CameraCapture.Plugin.Module" }; };
template <> struct guid<CameraCapture::Plugin::ICaptureEngine>{ static constexpr GUID value{ 0x7596BD75,0xC4E5,0x5CBF,{ 0xAD,0xAE,0xD5,0xC3,0x55,0xE6,0x18,0xDD } }; };
template <> struct guid<CameraCapture::Plugin::IModule>{ static constexpr GUID value{ 0x3CC03F99,0x2721,0x4C86,{ 0xB9,0xE6,0xF8,0xE0,0xAC,0x86,0x77,0x2C } }; };
template <> struct guid<CameraCapture::Plugin::IModuleFactory>{ static constexpr GUID value{ 0x269CE156,0xA271,0x48C9,{ 0xA7,0x97,0xBF,0x9D,0xBA,0xE7,0x60,0x89 } }; };
template <> struct default_interface<CameraCapture::Plugin::CaptureEngine>{ using type = CameraCapture::Plugin::ICaptureEngine; };
template <> struct default_interface<CameraCapture::Plugin::Module>{ using type = CameraCapture::Plugin::IModule; };

template <typename D>
struct consume_CameraCapture_Plugin_ICaptureEngine
{
    HRESULT StartPreview(uint32_t width, uint32_t height, bool enableAudio, bool enableMrc) const;
    HRESULT StopPreview() const;
    Windows::Perception::Spatial::SpatialCoordinateSystem AppCoordinateSystem() const;
    void AppCoordinateSystem(Windows::Perception::Spatial::SpatialCoordinateSystem const& value) const;
};
template <> struct consume<CameraCapture::Plugin::ICaptureEngine> { template <typename D> using type = consume_CameraCapture_Plugin_ICaptureEngine<D>; };

template <typename D>
struct consume_CameraCapture_Plugin_IModule
{
    void Shutdown() const;
    void OnRenderEvent(uint16_t frameNumber) const;
};
template <> struct consume<CameraCapture::Plugin::IModule> { template <typename D> using type = consume_CameraCapture_Plugin_IModule<D>; };

template <typename D>
struct consume_CameraCapture_Plugin_IModuleFactory
{
};
template <> struct consume<CameraCapture::Plugin::IModuleFactory> { template <typename D> using type = consume_CameraCapture_Plugin_IModuleFactory<D>; };

template <> struct abi<CameraCapture::Plugin::ICaptureEngine>{ struct type : IInspectable
{
    virtual HRESULT __stdcall StartPreview(uint32_t width, uint32_t height, bool enableAudio, bool enableMrc, HRESULT* result) noexcept = 0;
    virtual HRESULT __stdcall StopPreview(HRESULT* result) noexcept = 0;
    virtual HRESULT __stdcall get_AppCoordinateSystem(void** result) noexcept = 0;
    virtual HRESULT __stdcall put_AppCoordinateSystem(void* value) noexcept = 0;
};};

template <> struct abi<CameraCapture::Plugin::IModule>{ struct type : IInspectable
{
    virtual HRESULT __stdcall Shutdown() noexcept = 0;
    virtual HRESULT __stdcall OnRenderEvent(uint16_t frameNumber) noexcept = 0;
};};

template <> struct abi<CameraCapture::Plugin::IModuleFactory>{ struct type : IInspectable
{
};};

}
