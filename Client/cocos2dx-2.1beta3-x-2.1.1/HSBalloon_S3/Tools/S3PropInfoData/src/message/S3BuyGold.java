// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BuyGold.proto

package message;

public final class S3BuyGold {
  private S3BuyGold() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface BuyGoldOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {
    
    // optional uint32 id = 1;
    boolean hasId();
    int getId();
    
    // optional string name = 2;
    boolean hasName();
    String getName();
    
    // optional string describ = 3;
    boolean hasDescrib();
    String getDescrib();
    
    // optional uint32 gold_Number = 4;
    boolean hasGoldNumber();
    int getGoldNumber();
    
    // optional int32 money = 5;
    boolean hasMoney();
    int getMoney();
    
    // optional string localName = 6;
    boolean hasLocalName();
    String getLocalName();
  }
  public static final class BuyGold extends
      com.google.protobuf.GeneratedMessageLite
      implements BuyGoldOrBuilder {
    // Use BuyGold.newBuilder() to construct.
    private BuyGold(Builder builder) {
      super(builder);
    }
    private BuyGold(boolean noInit) {}
    
    private static final BuyGold defaultInstance;
    public static BuyGold getDefaultInstance() {
      return defaultInstance;
    }
    
    public BuyGold getDefaultInstanceForType() {
      return defaultInstance;
    }
    
    private int bitField0_;
    // optional uint32 id = 1;
    public static final int ID_FIELD_NUMBER = 1;
    private int id_;
    public boolean hasId() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    public int getId() {
      return id_;
    }
    
    // optional string name = 2;
    public static final int NAME_FIELD_NUMBER = 2;
    private java.lang.Object name_;
    public boolean hasName() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    public String getName() {
      java.lang.Object ref = name_;
      if (ref instanceof String) {
        return (String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        String s = bs.toStringUtf8();
        if (com.google.protobuf.Internal.isValidUtf8(bs)) {
          name_ = s;
        }
        return s;
      }
    }
    private com.google.protobuf.ByteString getNameBytes() {
      java.lang.Object ref = name_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8((String) ref);
        name_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    
    // optional string describ = 3;
    public static final int DESCRIB_FIELD_NUMBER = 3;
    private java.lang.Object describ_;
    public boolean hasDescrib() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    public String getDescrib() {
      java.lang.Object ref = describ_;
      if (ref instanceof String) {
        return (String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        String s = bs.toStringUtf8();
        if (com.google.protobuf.Internal.isValidUtf8(bs)) {
          describ_ = s;
        }
        return s;
      }
    }
    private com.google.protobuf.ByteString getDescribBytes() {
      java.lang.Object ref = describ_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8((String) ref);
        describ_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    
    // optional uint32 gold_Number = 4;
    public static final int GOLD_NUMBER_FIELD_NUMBER = 4;
    private int goldNumber_;
    public boolean hasGoldNumber() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    public int getGoldNumber() {
      return goldNumber_;
    }
    
    // optional int32 money = 5;
    public static final int MONEY_FIELD_NUMBER = 5;
    private int money_;
    public boolean hasMoney() {
      return ((bitField0_ & 0x00000010) == 0x00000010);
    }
    public int getMoney() {
      return money_;
    }
    
    // optional string localName = 6;
    public static final int LOCALNAME_FIELD_NUMBER = 6;
    private java.lang.Object localName_;
    public boolean hasLocalName() {
      return ((bitField0_ & 0x00000020) == 0x00000020);
    }
    public String getLocalName() {
      java.lang.Object ref = localName_;
      if (ref instanceof String) {
        return (String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        String s = bs.toStringUtf8();
        if (com.google.protobuf.Internal.isValidUtf8(bs)) {
          localName_ = s;
        }
        return s;
      }
    }
    private com.google.protobuf.ByteString getLocalNameBytes() {
      java.lang.Object ref = localName_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8((String) ref);
        localName_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    
    private void initFields() {
      id_ = 0;
      name_ = "";
      describ_ = "";
      goldNumber_ = 0;
      money_ = 0;
      localName_ = "";
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;
      
      memoizedIsInitialized = 1;
      return true;
    }
    
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeUInt32(1, id_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeBytes(2, getNameBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeBytes(3, getDescribBytes());
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, goldNumber_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        output.writeInt32(5, money_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        output.writeBytes(6, getLocalNameBytes());
      }
    }
    
    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;
    
      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(1, id_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, getNameBytes());
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(3, getDescribBytes());
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, goldNumber_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(5, money_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(6, getLocalNameBytes());
      }
      memoizedSerializedSize = size;
      return size;
    }
    
    private static final long serialVersionUID = 0L;
    @java.lang.Override
    protected java.lang.Object writeReplace()
        throws java.io.ObjectStreamException {
      return super.writeReplace();
    }
    
    public static message.S3BuyGold.BuyGold parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static message.S3BuyGold.BuyGold parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static message.S3BuyGold.BuyGold parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static message.S3BuyGold.BuyGold parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static message.S3BuyGold.BuyGold parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static message.S3BuyGold.BuyGold parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    public static message.S3BuyGold.BuyGold parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static message.S3BuyGold.BuyGold parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input, extensionRegistry)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static message.S3BuyGold.BuyGold parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static message.S3BuyGold.BuyGold parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    
    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(message.S3BuyGold.BuyGold prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }
    
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          message.S3BuyGold.BuyGold, Builder>
        implements message.S3BuyGold.BuyGoldOrBuilder {
      // Construct using message.S3BuyGold.BuyGold.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }
      
      private void maybeForceBuilderInitialization() {
      }
      private static Builder create() {
        return new Builder();
      }
      
      public Builder clear() {
        super.clear();
        id_ = 0;
        bitField0_ = (bitField0_ & ~0x00000001);
        name_ = "";
        bitField0_ = (bitField0_ & ~0x00000002);
        describ_ = "";
        bitField0_ = (bitField0_ & ~0x00000004);
        goldNumber_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        money_ = 0;
        bitField0_ = (bitField0_ & ~0x00000010);
        localName_ = "";
        bitField0_ = (bitField0_ & ~0x00000020);
        return this;
      }
      
      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }
      
      public message.S3BuyGold.BuyGold getDefaultInstanceForType() {
        return message.S3BuyGold.BuyGold.getDefaultInstance();
      }
      
      public message.S3BuyGold.BuyGold build() {
        message.S3BuyGold.BuyGold result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }
      
      private message.S3BuyGold.BuyGold buildParsed()
          throws com.google.protobuf.InvalidProtocolBufferException {
        message.S3BuyGold.BuyGold result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(
            result).asInvalidProtocolBufferException();
        }
        return result;
      }
      
      public message.S3BuyGold.BuyGold buildPartial() {
        message.S3BuyGold.BuyGold result = new message.S3BuyGold.BuyGold(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.id_ = id_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.name_ = name_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.describ_ = describ_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.goldNumber_ = goldNumber_;
        if (((from_bitField0_ & 0x00000010) == 0x00000010)) {
          to_bitField0_ |= 0x00000010;
        }
        result.money_ = money_;
        if (((from_bitField0_ & 0x00000020) == 0x00000020)) {
          to_bitField0_ |= 0x00000020;
        }
        result.localName_ = localName_;
        result.bitField0_ = to_bitField0_;
        return result;
      }
      
      public Builder mergeFrom(message.S3BuyGold.BuyGold other) {
        if (other == message.S3BuyGold.BuyGold.getDefaultInstance()) return this;
        if (other.hasId()) {
          setId(other.getId());
        }
        if (other.hasName()) {
          setName(other.getName());
        }
        if (other.hasDescrib()) {
          setDescrib(other.getDescrib());
        }
        if (other.hasGoldNumber()) {
          setGoldNumber(other.getGoldNumber());
        }
        if (other.hasMoney()) {
          setMoney(other.getMoney());
        }
        if (other.hasLocalName()) {
          setLocalName(other.getLocalName());
        }
        return this;
      }
      
      public final boolean isInitialized() {
        return true;
      }
      
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        while (true) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              
              return this;
            default: {
              if (!parseUnknownField(input, extensionRegistry, tag)) {
                
                return this;
              }
              break;
            }
            case 8: {
              bitField0_ |= 0x00000001;
              id_ = input.readUInt32();
              break;
            }
            case 18: {
              bitField0_ |= 0x00000002;
              name_ = input.readBytes();
              break;
            }
            case 26: {
              bitField0_ |= 0x00000004;
              describ_ = input.readBytes();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              goldNumber_ = input.readUInt32();
              break;
            }
            case 40: {
              bitField0_ |= 0x00000010;
              money_ = input.readInt32();
              break;
            }
            case 50: {
              bitField0_ |= 0x00000020;
              localName_ = input.readBytes();
              break;
            }
          }
        }
      }
      
      private int bitField0_;
      
      // optional uint32 id = 1;
      private int id_ ;
      public boolean hasId() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      public int getId() {
        return id_;
      }
      public Builder setId(int value) {
        bitField0_ |= 0x00000001;
        id_ = value;
        
        return this;
      }
      public Builder clearId() {
        bitField0_ = (bitField0_ & ~0x00000001);
        id_ = 0;
        
        return this;
      }
      
      // optional string name = 2;
      private java.lang.Object name_ = "";
      public boolean hasName() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      public String getName() {
        java.lang.Object ref = name_;
        if (!(ref instanceof String)) {
          String s = ((com.google.protobuf.ByteString) ref).toStringUtf8();
          name_ = s;
          return s;
        } else {
          return (String) ref;
        }
      }
      public Builder setName(String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000002;
        name_ = value;
        
        return this;
      }
      public Builder clearName() {
        bitField0_ = (bitField0_ & ~0x00000002);
        name_ = getDefaultInstance().getName();
        
        return this;
      }
      void setName(com.google.protobuf.ByteString value) {
        bitField0_ |= 0x00000002;
        name_ = value;
        
      }
      
      // optional string describ = 3;
      private java.lang.Object describ_ = "";
      public boolean hasDescrib() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      public String getDescrib() {
        java.lang.Object ref = describ_;
        if (!(ref instanceof String)) {
          String s = ((com.google.protobuf.ByteString) ref).toStringUtf8();
          describ_ = s;
          return s;
        } else {
          return (String) ref;
        }
      }
      public Builder setDescrib(String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000004;
        describ_ = value;
        
        return this;
      }
      public Builder clearDescrib() {
        bitField0_ = (bitField0_ & ~0x00000004);
        describ_ = getDefaultInstance().getDescrib();
        
        return this;
      }
      void setDescrib(com.google.protobuf.ByteString value) {
        bitField0_ |= 0x00000004;
        describ_ = value;
        
      }
      
      // optional uint32 gold_Number = 4;
      private int goldNumber_ ;
      public boolean hasGoldNumber() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      public int getGoldNumber() {
        return goldNumber_;
      }
      public Builder setGoldNumber(int value) {
        bitField0_ |= 0x00000008;
        goldNumber_ = value;
        
        return this;
      }
      public Builder clearGoldNumber() {
        bitField0_ = (bitField0_ & ~0x00000008);
        goldNumber_ = 0;
        
        return this;
      }
      
      // optional int32 money = 5;
      private int money_ ;
      public boolean hasMoney() {
        return ((bitField0_ & 0x00000010) == 0x00000010);
      }
      public int getMoney() {
        return money_;
      }
      public Builder setMoney(int value) {
        bitField0_ |= 0x00000010;
        money_ = value;
        
        return this;
      }
      public Builder clearMoney() {
        bitField0_ = (bitField0_ & ~0x00000010);
        money_ = 0;
        
        return this;
      }
      
      // optional string localName = 6;
      private java.lang.Object localName_ = "";
      public boolean hasLocalName() {
        return ((bitField0_ & 0x00000020) == 0x00000020);
      }
      public String getLocalName() {
        java.lang.Object ref = localName_;
        if (!(ref instanceof String)) {
          String s = ((com.google.protobuf.ByteString) ref).toStringUtf8();
          localName_ = s;
          return s;
        } else {
          return (String) ref;
        }
      }
      public Builder setLocalName(String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000020;
        localName_ = value;
        
        return this;
      }
      public Builder clearLocalName() {
        bitField0_ = (bitField0_ & ~0x00000020);
        localName_ = getDefaultInstance().getLocalName();
        
        return this;
      }
      void setLocalName(com.google.protobuf.ByteString value) {
        bitField0_ |= 0x00000020;
        localName_ = value;
        
      }
      
      // @@protoc_insertion_point(builder_scope:message.BuyGold)
    }
    
    static {
      defaultInstance = new BuyGold(true);
      defaultInstance.initFields();
    }
    
    // @@protoc_insertion_point(class_scope:message.BuyGold)
  }
  
  
  static {
  }
  
  // @@protoc_insertion_point(outer_class_scope)
}
