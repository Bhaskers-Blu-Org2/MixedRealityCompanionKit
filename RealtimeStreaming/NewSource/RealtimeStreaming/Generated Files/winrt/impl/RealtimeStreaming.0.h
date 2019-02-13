﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once

WINRT_EXPORT namespace winrt::RealtimeStreaming {

struct IClass;
struct Class;

}

namespace winrt::impl {

template <> struct category<RealtimeStreaming::IClass>{ using type = interface_category; };
template <> struct category<RealtimeStreaming::Class>{ using type = class_category; };
template <> struct name<RealtimeStreaming::IClass>{ static constexpr auto & value{ L"RealtimeStreaming.IClass" }; };
template <> struct name<RealtimeStreaming::Class>{ static constexpr auto & value{ L"RealtimeStreaming.Class" }; };
template <> struct guid<RealtimeStreaming::IClass>{ static constexpr GUID value{ 0xE410B57A,0x2197,0x5FF4,{ 0xA4,0x2D,0xFB,0x26,0x73,0xBA,0x22,0xE4 } }; };
template <> struct default_interface<RealtimeStreaming::Class>{ using type = RealtimeStreaming::IClass; };

template <typename D>
struct consume_RealtimeStreaming_IClass
{
    int32_t MyProperty() const;
    void MyProperty(int32_t value) const;
};
template <> struct consume<RealtimeStreaming::IClass> { template <typename D> using type = consume_RealtimeStreaming_IClass<D>; };

template <> struct abi<RealtimeStreaming::IClass>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_MyProperty(int32_t* result) noexcept = 0;
    virtual HRESULT __stdcall put_MyProperty(int32_t value) noexcept = 0;
};};

}
