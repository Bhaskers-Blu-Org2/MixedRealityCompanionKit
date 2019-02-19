﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once
#include "winrt/impl/RealtimeStreaming.Common.1.h"
#include "winrt/impl/Windows.Networking.Sockets.1.h"
#include "winrt/impl/RealtimeStreaming.Plugin.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/RealtimeStreaming.Network.1.h"

WINRT_EXPORT namespace winrt::RealtimeStreaming::Network {

struct DisconnectedDelegate : Windows::Foundation::IUnknown
{
    DisconnectedDelegate(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DisconnectedDelegate(L lambda);
    template <typename F> DisconnectedDelegate(F* function);
    template <typename O, typename M> DisconnectedDelegate(O* object, M method);
    template <typename O, typename M> DisconnectedDelegate(com_ptr<O>&& object, M method);
    template <typename O, typename M> DisconnectedDelegate(weak_ref<O>&& object, M method);
    void operator()() const;
};

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::RealtimeStreaming::Network {

struct WINRT_EBO Connection :
    RealtimeStreaming::Network::IConnection,
    impl::require<Connection, RealtimeStreaming::Plugin::IRTModule>
{
    Connection(std::nullptr_t) noexcept {}
    Connection();
    Connection(Windows::Networking::Sockets::StreamSocket const& streamSocket);
};

struct WINRT_EBO Connector :
    RealtimeStreaming::Network::IConnector,
    impl::require<Connector, RealtimeStreaming::Plugin::IRTModule>
{
    Connector(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DataBuffer :
    RealtimeStreaming::Network::IDataBuffer,
    impl::require<DataBuffer, Windows::Storage::Streams::IBuffer>
{
    DataBuffer(std::nullptr_t) noexcept {}
    DataBuffer();
    DataBuffer(uint64_t size);
};

struct WINRT_EBO DataBundle :
    RealtimeStreaming::Network::IDataBundle
{
    DataBundle(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DataBundleArgs :
    RealtimeStreaming::Network::IDataBundleArgs
{
    DataBundleArgs(std::nullptr_t) noexcept {}
    DataBundleArgs(RealtimeStreaming::Common::PayloadType const& type, RealtimeStreaming::Network::Connection const& connection, RealtimeStreaming::Network::DataBundle const& dataBundle);
};

struct WINRT_EBO Listener :
    RealtimeStreaming::Network::IListener,
    impl::require<Listener, RealtimeStreaming::Plugin::IRTModule>
{
    Listener(std::nullptr_t) noexcept {}
    Listener(uint16_t port);
};

}
