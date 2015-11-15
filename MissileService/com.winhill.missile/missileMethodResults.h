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

ref class missileConsumer;

public ref class missileLedResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static missileLedResult^ CreateSuccessResult()
    {
        auto result = ref new missileLedResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static missileLedResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new missileLedResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class missileMoveResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static missileMoveResult^ CreateSuccessResult()
    {
        auto result = ref new missileMoveResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static missileMoveResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new missileMoveResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class missileFireResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static missileFireResult^ CreateSuccessResult()
    {
        auto result = ref new missileFireResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static missileFireResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new missileFireResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class missileJoinSessionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property missileConsumer^ Consumer
    {
        missileConsumer^ get() { return m_consumer; }
    internal:
        void set(_In_ missileConsumer^ value) { m_consumer = value; }
    };

private:
    int32 m_status;
    missileConsumer^ m_consumer;
};

} } } 
