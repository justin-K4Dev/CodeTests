// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: protocol.CommandType.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Protocol {

  /// <summary>Holder for reflection information generated from protocol.CommandType.proto</summary>
  public static partial class ProtocolCommandTypeReflection {

    #region Descriptor
    /// <summary>File descriptor for protocol.CommandType.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ProtocolCommandTypeReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Chpwcm90b2NvbC5Db21tYW5kVHlwZS5wcm90bxIIUHJvdG9jb2wqMAoLQ29t",
            "bWFuZFR5cGUSCAoETk9ORRAAEhcKElBMQVlFUl9JTkZPX1VQREFURRC5F2IG",
            "cHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::Protocol.CommandType), }, null, null));
    }
    #endregion

  }
  #region Enums
  public enum CommandType {
    [pbr::OriginalName("NONE")] None = 0,
    [pbr::OriginalName("PLAYER_INFO_UPDATE")] PlayerInfoUpdate = 3001,
  }

  #endregion

}

#endregion Designer generated code
