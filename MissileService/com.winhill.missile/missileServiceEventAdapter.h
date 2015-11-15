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
#pragma once

namespace com { namespace winhill { namespace missile {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement ImissileService. Instead, missileServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class missileServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] ImissileService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<missileServiceEventAdapter^, missileLedCalledEventArgs^>^ LedCalled;
    event Windows::Foundation::TypedEventHandler<missileServiceEventAdapter^, missileMoveCalledEventArgs^>^ MoveCalled;
    event Windows::Foundation::TypedEventHandler<missileServiceEventAdapter^, missileFireCalledEventArgs^>^ FireCalled;

    // Property Read Events
    
    // Property Write Events

    // ImissileService Implementation
    virtual Windows::Foundation::IAsyncOperation<missileLedResult^>^ LedAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ bool interfaceMemberOn);
    virtual Windows::Foundation::IAsyncOperation<missileMoveResult^>^ MoveAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberDirection, _In_ int32 interfaceMemberTime);
    virtual Windows::Foundation::IAsyncOperation<missileFireResult^>^ FireAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);


};

} } } 