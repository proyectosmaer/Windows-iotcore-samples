//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace com::microsoft::maker::InternetRadio;

// Note: Unlike an Interface implementation, which provides a single handler for each member, the event
// model allows for 0 or more listeners to be registered. The EventAdapter implementation deals with this
// difference by implementing a last-writer-wins policy. The lack of any return value (i.e., 0 listeners)
// is handled by returning a null result.

// Methods
IAsyncOperation<InternetRadioAddPresetResult^>^ InternetRadioServiceEventAdapter::AddPresetAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberPresetAddress)
{
    auto args = ref new InternetRadioAddPresetCalledEventArgs(info, interfaceMemberPresetName, interfaceMemberPresetAddress);
    AllJoynHelpers::DispatchEvent([=]() {
        AddPresetCalled(this, args);
    });
    return InternetRadioAddPresetCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioNextPresetResult^>^ InternetRadioServiceEventAdapter::NextPresetAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new InternetRadioNextPresetCalledEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        NextPresetCalled(this, args);
    });
    return InternetRadioNextPresetCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioPlayPresetResult^>^ InternetRadioServiceEventAdapter::PlayPresetAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName)
{
    auto args = ref new InternetRadioPlayPresetCalledEventArgs(info, interfaceMemberPresetName);
    AllJoynHelpers::DispatchEvent([=]() {
        PlayPresetCalled(this, args);
    });
    return InternetRadioPlayPresetCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioPreviousPresetResult^>^ InternetRadioServiceEventAdapter::PreviousPresetAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new InternetRadioPreviousPresetCalledEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        PreviousPresetCalled(this, args);
    });
    return InternetRadioPreviousPresetCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioRemovePresetResult^>^ InternetRadioServiceEventAdapter::RemovePresetAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName)
{
    auto args = ref new InternetRadioRemovePresetCalledEventArgs(info, interfaceMemberPresetName);
    AllJoynHelpers::DispatchEvent([=]() {
        RemovePresetCalled(this, args);
    });
    return InternetRadioRemovePresetCalledEventArgs::GetResultAsync(args);
}

// Property Reads
IAsyncOperation<InternetRadioGetCurrentlyPlayingResult^>^ InternetRadioServiceEventAdapter::GetCurrentlyPlayingAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new InternetRadioGetCurrentlyPlayingRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetCurrentlyPlayingRequested(this, args);
    });
    return InternetRadioGetCurrentlyPlayingRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioGetPowerResult^>^ InternetRadioServiceEventAdapter::GetPowerAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new InternetRadioGetPowerRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetPowerRequested(this, args);
    });
    return InternetRadioGetPowerRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioGetPresetsResult^>^ InternetRadioServiceEventAdapter::GetPresetsAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new InternetRadioGetPresetsRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetPresetsRequested(this, args);
    });
    return InternetRadioGetPresetsRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioGetVersionResult^>^ InternetRadioServiceEventAdapter::GetVersionAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new InternetRadioGetVersionRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetVersionRequested(this, args);
    });
    return InternetRadioGetVersionRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioGetVolumeResult^>^ InternetRadioServiceEventAdapter::GetVolumeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new InternetRadioGetVolumeRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetVolumeRequested(this, args);
    });
    return InternetRadioGetVolumeRequestedEventArgs::GetResultAsync(args);
}

// Property Writes
IAsyncOperation<InternetRadioSetPowerResult^>^ InternetRadioServiceEventAdapter::SetPowerAsync(_In_ AllJoynMessageInfo^ info, _In_ bool value)
{
    auto args = ref new InternetRadioSetPowerRequestedEventArgs(info, value);
    AllJoynHelpers::DispatchEvent([=]() {
        SetPowerRequested(this, args);
    });
    return InternetRadioSetPowerRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<InternetRadioSetVolumeResult^>^ InternetRadioServiceEventAdapter::SetVolumeAsync(_In_ AllJoynMessageInfo^ info, _In_ double value)
{
    auto args = ref new InternetRadioSetVolumeRequestedEventArgs(info, value);
    AllJoynHelpers::DispatchEvent([=]() {
        SetVolumeRequested(this, args);
    });
    return InternetRadioSetVolumeRequestedEventArgs::GetResultAsync(args);
}
