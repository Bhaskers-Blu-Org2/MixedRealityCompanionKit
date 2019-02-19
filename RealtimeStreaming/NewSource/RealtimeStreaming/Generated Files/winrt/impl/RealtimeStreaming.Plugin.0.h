﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

WINRT_EXPORT namespace winrt::RealtimeStreaming::Plugin {

enum class DeviceType : int32_t
{
    Null = 0,
    DX11 = 1,
    Warp = 2,
};

struct IModuleManager;
struct IPluginManager;
struct IRTModule;
struct ModuleManager;
struct PluginManager;

}

namespace winrt::impl {

template <> struct category<RealtimeStreaming::Plugin::IModuleManager>{ using type = interface_category; };
template <> struct category<RealtimeStreaming::Plugin::IPluginManager>{ using type = interface_category; };
template <> struct category<RealtimeStreaming::Plugin::IRTModule>{ using type = interface_category; };
template <> struct category<RealtimeStreaming::Plugin::ModuleManager>{ using type = class_category; };
template <> struct category<RealtimeStreaming::Plugin::PluginManager>{ using type = class_category; };
template <> struct category<RealtimeStreaming::Plugin::DeviceType>{ using type = enum_category; };
template <> struct name<RealtimeStreaming::Plugin::IModuleManager>{ static constexpr auto & value{ L"RealtimeStreaming.Plugin.IModuleManager" }; };
template <> struct name<RealtimeStreaming::Plugin::IPluginManager>{ static constexpr auto & value{ L"RealtimeStreaming.Plugin.IPluginManager" }; };
template <> struct name<RealtimeStreaming::Plugin::IRTModule>{ static constexpr auto & value{ L"RealtimeStreaming.Plugin.IRTModule" }; };
template <> struct name<RealtimeStreaming::Plugin::ModuleManager>{ static constexpr auto & value{ L"RealtimeStreaming.Plugin.ModuleManager" }; };
template <> struct name<RealtimeStreaming::Plugin::PluginManager>{ static constexpr auto & value{ L"RealtimeStreaming.Plugin.PluginManager" }; };
template <> struct name<RealtimeStreaming::Plugin::DeviceType>{ static constexpr auto & value{ L"RealtimeStreaming.Plugin.DeviceType" }; };
template <> struct guid_storage<RealtimeStreaming::Plugin::IModuleManager>{ static constexpr guid value{ 0x94089243,0x5EB2,0x5716,{ 0xB5,0x96,0x76,0xAD,0x64,0x25,0x87,0xF9 } }; };
template <> struct guid_storage<RealtimeStreaming::Plugin::IPluginManager>{ static constexpr guid value{ 0xB46023FE,0x14F5,0x53D2,{ 0x84,0xC0,0xA1,0x48,0xFE,0x95,0x7B,0xFF } }; };
template <> struct guid_storage<RealtimeStreaming::Plugin::IRTModule>{ static constexpr guid value{ 0x2EDEB3FB,0x8008,0x4A13,{ 0xB8,0xD3,0x70,0x81,0xFD,0x11,0x44,0x3F } }; };
template <> struct default_interface<RealtimeStreaming::Plugin::ModuleManager>{ using type = RealtimeStreaming::Plugin::IModuleManager; };
template <> struct default_interface<RealtimeStreaming::Plugin::PluginManager>{ using type = RealtimeStreaming::Plugin::IPluginManager; };

template <> struct abi<RealtimeStreaming::Plugin::IModuleManager>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL AddModule(void* pluginModule, uint32_t* result) noexcept = 0;
    virtual int32_t WINRT_CALL GetModule(uint32_t moduleHandle, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL ReleaseModule(uint32_t moduleHandle) noexcept = 0;
};};

template <> struct abi<RealtimeStreaming::Plugin::IPluginManager>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ModuleManager(void** value) noexcept = 0;
};};

template <> struct abi<RealtimeStreaming::Plugin::IRTModule>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Shutdown() noexcept = 0;
};};

template <typename D>
struct consume_RealtimeStreaming_Plugin_IModuleManager
{
    uint32_t AddModule(RealtimeStreaming::Plugin::IRTModule const& pluginModule) const;
    RealtimeStreaming::Plugin::IRTModule GetModule(uint32_t moduleHandle) const;
    void ReleaseModule(uint32_t moduleHandle) const;
};
template <> struct consume<RealtimeStreaming::Plugin::IModuleManager> { template <typename D> using type = consume_RealtimeStreaming_Plugin_IModuleManager<D>; };

template <typename D>
struct consume_RealtimeStreaming_Plugin_IPluginManager
{
    RealtimeStreaming::Plugin::ModuleManager ModuleManager() const;
};
template <> struct consume<RealtimeStreaming::Plugin::IPluginManager> { template <typename D> using type = consume_RealtimeStreaming_Plugin_IPluginManager<D>; };

template <typename D>
struct consume_RealtimeStreaming_Plugin_IRTModule
{
    void Shutdown() const;
};
template <> struct consume<RealtimeStreaming::Plugin::IRTModule> { template <typename D> using type = consume_RealtimeStreaming_Plugin_IRTModule<D>; };

}
