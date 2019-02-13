﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180227.3"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/RealtimeStreaming.Common.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/RealtimeStreaming.Plugin.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/RealtimeStreaming.Network.2.h"
#include "winrt/RealtimeStreaming.h"

namespace winrt::impl {

template <typename D> RealtimeStreaming::Common::PayloadType consume_RealtimeStreaming_Network_IBundleReceivedArgs<D>::PayloadType() const
{
    RealtimeStreaming::Common::PayloadType result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IBundleReceivedArgs)->get_PayloadType(put_abi(result)));
    return result;
}

template <typename D> RealtimeStreaming::Network::Connection consume_RealtimeStreaming_Network_IBundleReceivedArgs<D>::DataConnection() const
{
    RealtimeStreaming::Network::Connection result{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IBundleReceivedArgs)->get_DataConnection(put_abi(result)));
    return result;
}

template <typename D> RealtimeStreaming::Network::DataBundle consume_RealtimeStreaming_Network_IBundleReceivedArgs<D>::Bundle() const
{
    RealtimeStreaming::Network::DataBundle result{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IBundleReceivedArgs)->get_Bundle(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_RealtimeStreaming_Network_IConnection<D>::SendPayloadTypeAsync(RealtimeStreaming::Common::PayloadType const& type) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->SendPayloadTypeAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_RealtimeStreaming_Network_IConnection<D>::SendBundleAsync(RealtimeStreaming::Network::DataBundle const& dataBundle) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->SendBundleAsync(get_abi(dataBundle), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_RealtimeStreaming_Network_IConnection<D>::IsConnected() const
{
    bool result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->get_IsConnected(&result));
    return result;
}

template <typename D> Windows::Networking::Sockets::StreamSocketInformation consume_RealtimeStreaming_Network_IConnection<D>::ConnectionInfo() const
{
    Windows::Networking::Sockets::StreamSocketInformation result{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->get_ConnectionInfo(put_abi(result)));
    return result;
}

template <typename D> event_token consume_RealtimeStreaming_Network_IConnection<D>::Disconnected(RealtimeStreaming::Network::DisconnectedDelegate const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->add_Disconnected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<RealtimeStreaming::Network::IConnection> consume_RealtimeStreaming_Network_IConnection<D>::Disconnected(auto_revoke_t, RealtimeStreaming::Network::DisconnectedDelegate const& handler) const
{
    return impl::make_event_revoker<D, RealtimeStreaming::Network::IConnection>(this, &abi_t<RealtimeStreaming::Network::IConnection>::remove_Disconnected, Disconnected(handler));
}

template <typename D> void consume_RealtimeStreaming_Network_IConnection<D>::Disconnected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->remove_Disconnected(get_abi(token)));
}

template <typename D> event_token consume_RealtimeStreaming_Network_IConnection<D>::Received(Windows::Foundation::EventHandler<RealtimeStreaming::Network::BundleReceivedArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->add_Received(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<RealtimeStreaming::Network::IConnection> consume_RealtimeStreaming_Network_IConnection<D>::Received(auto_revoke_t, Windows::Foundation::EventHandler<RealtimeStreaming::Network::BundleReceivedArgs> const& handler) const
{
    return impl::make_event_revoker<D, RealtimeStreaming::Network::IConnection>(this, &abi_t<RealtimeStreaming::Network::IConnection>::remove_Received, Received(handler));
}

template <typename D> void consume_RealtimeStreaming_Network_IConnection<D>::Received(event_token const& token) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnection)->remove_Received(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<RealtimeStreaming::Network::Connection> consume_RealtimeStreaming_Network_IConnector<D>::ConnectAsync() const
{
    Windows::Foundation::IAsyncOperation<RealtimeStreaming::Network::Connection> operation{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnector)->ConnectAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_RealtimeStreaming_Network_IConnector<D>::Closed(Windows::Foundation::EventHandler<bool> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnector)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<RealtimeStreaming::Network::IConnector> consume_RealtimeStreaming_Network_IConnector<D>::Closed(auto_revoke_t, Windows::Foundation::EventHandler<bool> const& handler) const
{
    return impl::make_event_revoker<D, RealtimeStreaming::Network::IConnector>(this, &abi_t<RealtimeStreaming::Network::IConnector>::remove_Closed, Closed(handler));
}

template <typename D> void consume_RealtimeStreaming_Network_IConnector<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IConnector)->remove_Closed(get_abi(token)));
}

template <typename D> uint64_t consume_RealtimeStreaming_Network_IDataBuffer<D>::CurrentLength() const
{
    uint64_t result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBuffer)->get_CurrentLength(&result));
    return result;
}

template <typename D> void consume_RealtimeStreaming_Network_IDataBuffer<D>::CurrentLength(uint64_t value) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBuffer)->put_CurrentLength(value));
}

template <typename D> uint64_t consume_RealtimeStreaming_Network_IDataBuffer<D>::Offset() const
{
    uint64_t result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBuffer)->get_Offset(&result));
    return result;
}

template <typename D> void consume_RealtimeStreaming_Network_IDataBuffer<D>::Offset(uint64_t value) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBuffer)->put_Offset(value));
}

template <typename D> HRESULT consume_RealtimeStreaming_Network_IDataBuffer<D>::TrimLeft(uint64_t cbSize) const
{
    HRESULT result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBuffer)->TrimLeft(cbSize, put_abi(result)));
    return result;
}

template <typename D> RealtimeStreaming::Network::DataBuffer consume_RealtimeStreaming_Network_IDataBuffer<D>::TrimRight(uint64_t cbSize) const
{
    RealtimeStreaming::Network::DataBuffer result{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBuffer)->TrimRight(cbSize, put_abi(result)));
    return result;
}

template <typename D> HRESULT consume_RealtimeStreaming_Network_IDataBuffer<D>::Reset() const
{
    HRESULT result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBuffer)->Reset(put_abi(result)));
    return result;
}

template <typename D> RealtimeStreaming::Network::DataBuffer consume_RealtimeStreaming_Network_IDataBufferFactory<D>::CreateInstance(uint64_t size) const
{
    RealtimeStreaming::Network::DataBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBufferFactory)->CreateInstance(size, put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_RealtimeStreaming_Network_IDataBundle<D>::BufferCount() const
{
    uint32_t result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBundle)->get_BufferCount(&result));
    return result;
}

template <typename D> uint64_t consume_RealtimeStreaming_Network_IDataBundle<D>::TotalSize() const
{
    uint64_t result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBundle)->get_TotalSize(&result));
    return result;
}

template <typename D> void consume_RealtimeStreaming_Network_IDataBundle<D>::AddBuffer(RealtimeStreaming::Network::DataBuffer const& dataBuffer) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBundle)->AddBuffer(get_abi(dataBuffer)));
}

template <typename D> bool consume_RealtimeStreaming_Network_IDataBundle<D>::InsertBuffer(uint32_t index, RealtimeStreaming::Network::DataBuffer const& dataBuffer) const
{
    bool result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBundle)->InsertBuffer(index, get_abi(dataBuffer), &result));
    return result;
}

template <typename D> bool consume_RealtimeStreaming_Network_IDataBundle<D>::RemoveBuffer(RealtimeStreaming::Network::DataBuffer const& dataBuffer) const
{
    bool result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBundle)->RemoveBuffer(get_abi(dataBuffer), &result));
    return result;
}

template <typename D> void consume_RealtimeStreaming_Network_IDataBundle<D>::Reset() const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IDataBundle)->Reset());
}

template <typename D> Windows::Foundation::IAsyncOperation<RealtimeStreaming::Network::Connection> consume_RealtimeStreaming_Network_IListener<D>::ListenAsync() const
{
    Windows::Foundation::IAsyncOperation<RealtimeStreaming::Network::Connection> operation{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IListener)->ListenAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_RealtimeStreaming_Network_IListener<D>::Closed(Windows::Foundation::EventHandler<bool> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IListener)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<RealtimeStreaming::Network::IListener> consume_RealtimeStreaming_Network_IListener<D>::Closed(auto_revoke_t, Windows::Foundation::EventHandler<bool> const& handler) const
{
    return impl::make_event_revoker<D, RealtimeStreaming::Network::IListener>(this, &abi_t<RealtimeStreaming::Network::IListener>::remove_Closed, Closed(handler));
}

template <typename D> void consume_RealtimeStreaming_Network_IListener<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IListener)->remove_Closed(get_abi(token)));
}

template <typename D> RealtimeStreaming::Network::Listener consume_RealtimeStreaming_Network_IListenerFactory<D>::CreateInstance(uint16_t port) const
{
    RealtimeStreaming::Network::Listener value{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Network::IListenerFactory)->CreateInstance(port, put_abi(value)));
    return value;
}

template <> struct delegate<RealtimeStreaming::Network::DisconnectedDelegate>
{
    template <typename H>
    struct type : implements_delegate<RealtimeStreaming::Network::DisconnectedDelegate, H>
    {
        type(H&& handler) : implements_delegate<RealtimeStreaming::Network::DisconnectedDelegate, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke() noexcept final
        {
            try
            {
                (*this)();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IBundleReceivedArgs> : produce_base<D, RealtimeStreaming::Network::IBundleReceivedArgs>
{
    HRESULT __stdcall get_PayloadType(RealtimeStreaming::Common::PayloadType* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<RealtimeStreaming::Common::PayloadType>(this->shim().PayloadType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DataConnection(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<RealtimeStreaming::Network::Connection>(this->shim().DataConnection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bundle(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<RealtimeStreaming::Network::DataBundle>(this->shim().Bundle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IConnection> : produce_base<D, RealtimeStreaming::Network::IConnection>
{
    HRESULT __stdcall SendPayloadTypeAsync(RealtimeStreaming::Common::PayloadType type, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SendPayloadTypeAsync(*reinterpret_cast<RealtimeStreaming::Common::PayloadType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendBundleAsync(void* dataBundle, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SendBundleAsync(*reinterpret_cast<RealtimeStreaming::Network::DataBundle const*>(&dataBundle)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsConnected(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsConnected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionInfo(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Sockets::StreamSocketInformation>(this->shim().ConnectionInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Disconnected(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Disconnected(*reinterpret_cast<RealtimeStreaming::Network::DisconnectedDelegate const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Disconnected(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Received(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Received(*reinterpret_cast<Windows::Foundation::EventHandler<RealtimeStreaming::Network::BundleReceivedArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Received(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Received(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IConnector> : produce_base<D, RealtimeStreaming::Network::IConnector>
{
    HRESULT __stdcall ConnectAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<RealtimeStreaming::Network::Connection>>(this->shim().ConnectAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::EventHandler<bool> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IDataBuffer> : produce_base<D, RealtimeStreaming::Network::IDataBuffer>
{
    HRESULT __stdcall get_CurrentLength(uint64_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<uint64_t>(this->shim().CurrentLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CurrentLength(uint64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentLength(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(uint64_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<uint64_t>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(uint64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrimLeft(uint64_t cbSize, HRESULT* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<HRESULT>(this->shim().TrimLeft(cbSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrimRight(uint64_t cbSize, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<RealtimeStreaming::Network::DataBuffer>(this->shim().TrimRight(cbSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Reset(HRESULT* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<HRESULT>(this->shim().Reset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IDataBufferFactory> : produce_base<D, RealtimeStreaming::Network::IDataBufferFactory>
{
    HRESULT __stdcall CreateInstance(uint64_t size, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<RealtimeStreaming::Network::DataBuffer>(this->shim().CreateInstance(size));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IDataBundle> : produce_base<D, RealtimeStreaming::Network::IDataBundle>
{
    HRESULT __stdcall get_BufferCount(uint32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<uint32_t>(this->shim().BufferCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSize(uint64_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<uint64_t>(this->shim().TotalSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddBuffer(void* dataBuffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddBuffer(*reinterpret_cast<RealtimeStreaming::Network::DataBuffer const*>(&dataBuffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertBuffer(uint32_t index, void* dataBuffer, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().InsertBuffer(index, *reinterpret_cast<RealtimeStreaming::Network::DataBuffer const*>(&dataBuffer)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveBuffer(void* dataBuffer, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().RemoveBuffer(*reinterpret_cast<RealtimeStreaming::Network::DataBuffer const*>(&dataBuffer)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IDataBundleFactory> : produce_base<D, RealtimeStreaming::Network::IDataBundleFactory>
{};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IListener> : produce_base<D, RealtimeStreaming::Network::IListener>
{
    HRESULT __stdcall ListenAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<RealtimeStreaming::Network::Connection>>(this->shim().ListenAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::EventHandler<bool> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Network::IListenerFactory> : produce_base<D, RealtimeStreaming::Network::IListenerFactory>
{
    HRESULT __stdcall CreateInstance(uint16_t port, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<RealtimeStreaming::Network::Listener>(this->shim().CreateInstance(port));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::RealtimeStreaming::Network {

inline DataBuffer::DataBuffer(uint64_t size) :
    DataBuffer(get_activation_factory<DataBuffer, RealtimeStreaming::Network::IDataBufferFactory>().CreateInstance(size))
{}

inline Listener::Listener(uint16_t port) :
    Listener(get_activation_factory<Listener, RealtimeStreaming::Network::IListenerFactory>().CreateInstance(port))
{}

template <typename L> DisconnectedDelegate::DisconnectedDelegate(L handler) :
    DisconnectedDelegate(impl::make_delegate<DisconnectedDelegate>(std::forward<L>(handler)))
{}

template <typename F> DisconnectedDelegate::DisconnectedDelegate(F* handler) :
    DisconnectedDelegate([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DisconnectedDelegate::DisconnectedDelegate(O* object, M method) :
    DisconnectedDelegate([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DisconnectedDelegate::operator()() const
{
    check_hresult((*(impl::abi_t<DisconnectedDelegate>**)this)->Invoke());
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::RealtimeStreaming::Network::IBundleReceivedArgs> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IBundleReceivedArgs> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IConnection> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IConnection> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IConnector> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IConnector> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IDataBuffer> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IDataBuffer> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IDataBufferFactory> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IDataBufferFactory> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IDataBundle> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IDataBundle> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IDataBundleFactory> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IDataBundleFactory> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IListener> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IListener> {};
template<> struct hash<winrt::RealtimeStreaming::Network::IListenerFactory> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::IListenerFactory> {};
template<> struct hash<winrt::RealtimeStreaming::Network::BundleReceivedArgs> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::BundleReceivedArgs> {};
template<> struct hash<winrt::RealtimeStreaming::Network::Connection> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::Connection> {};
template<> struct hash<winrt::RealtimeStreaming::Network::Connector> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::Connector> {};
template<> struct hash<winrt::RealtimeStreaming::Network::DataBuffer> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::DataBuffer> {};
template<> struct hash<winrt::RealtimeStreaming::Network::DataBundle> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::DataBundle> {};
template<> struct hash<winrt::RealtimeStreaming::Network::Listener> : winrt::impl::hash_base<winrt::RealtimeStreaming::Network::Listener> {};

}

WINRT_WARNING_POP
