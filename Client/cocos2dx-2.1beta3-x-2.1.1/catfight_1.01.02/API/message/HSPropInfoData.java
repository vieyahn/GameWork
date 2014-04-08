// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PropInfoData.proto

package message;

public final class HSPropInfoData {
  private HSPropInfoData() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface PropInfoDataOrBuilder
      extends com.google.protobuf.MessageLiteOrBuilder {
    
    // repeated .message.PropInfo manualPropInfoList = 1;
    java.util.List<message.HSPropInfo.PropInfo> 
        getManualPropInfoListList();
    message.HSPropInfo.PropInfo getManualPropInfoList(int index);
    int getManualPropInfoListCount();
    
    // repeated .message.PropInfo bufferPropInfoList = 2;
    java.util.List<message.HSPropInfo.PropInfo> 
        getBufferPropInfoListList();
    message.HSPropInfo.PropInfo getBufferPropInfoList(int index);
    int getBufferPropInfoListCount();
    
    // repeated .message.PropInfo giftBagPropInfoList = 3;
    java.util.List<message.HSPropInfo.PropInfo> 
        getGiftBagPropInfoListList();
    message.HSPropInfo.PropInfo getGiftBagPropInfoList(int index);
    int getGiftBagPropInfoListCount();
  }
  public static final class PropInfoData extends
      com.google.protobuf.GeneratedMessageLite
      implements PropInfoDataOrBuilder {
    // Use PropInfoData.newBuilder() to construct.
    private PropInfoData(Builder builder) {
      super(builder);
    }
    private PropInfoData(boolean noInit) {}
    
    private static final PropInfoData defaultInstance;
    public static PropInfoData getDefaultInstance() {
      return defaultInstance;
    }
    
    public PropInfoData getDefaultInstanceForType() {
      return defaultInstance;
    }
    
    // repeated .message.PropInfo manualPropInfoList = 1;
    public static final int MANUALPROPINFOLIST_FIELD_NUMBER = 1;
    private java.util.List<message.HSPropInfo.PropInfo> manualPropInfoList_;
    public java.util.List<message.HSPropInfo.PropInfo> getManualPropInfoListList() {
      return manualPropInfoList_;
    }
    public java.util.List<? extends message.HSPropInfo.PropInfoOrBuilder> 
        getManualPropInfoListOrBuilderList() {
      return manualPropInfoList_;
    }
    public int getManualPropInfoListCount() {
      return manualPropInfoList_.size();
    }
    public message.HSPropInfo.PropInfo getManualPropInfoList(int index) {
      return manualPropInfoList_.get(index);
    }
    public message.HSPropInfo.PropInfoOrBuilder getManualPropInfoListOrBuilder(
        int index) {
      return manualPropInfoList_.get(index);
    }
    
    // repeated .message.PropInfo bufferPropInfoList = 2;
    public static final int BUFFERPROPINFOLIST_FIELD_NUMBER = 2;
    private java.util.List<message.HSPropInfo.PropInfo> bufferPropInfoList_;
    public java.util.List<message.HSPropInfo.PropInfo> getBufferPropInfoListList() {
      return bufferPropInfoList_;
    }
    public java.util.List<? extends message.HSPropInfo.PropInfoOrBuilder> 
        getBufferPropInfoListOrBuilderList() {
      return bufferPropInfoList_;
    }
    public int getBufferPropInfoListCount() {
      return bufferPropInfoList_.size();
    }
    public message.HSPropInfo.PropInfo getBufferPropInfoList(int index) {
      return bufferPropInfoList_.get(index);
    }
    public message.HSPropInfo.PropInfoOrBuilder getBufferPropInfoListOrBuilder(
        int index) {
      return bufferPropInfoList_.get(index);
    }
    
    // repeated .message.PropInfo giftBagPropInfoList = 3;
    public static final int GIFTBAGPROPINFOLIST_FIELD_NUMBER = 3;
    private java.util.List<message.HSPropInfo.PropInfo> giftBagPropInfoList_;
    public java.util.List<message.HSPropInfo.PropInfo> getGiftBagPropInfoListList() {
      return giftBagPropInfoList_;
    }
    public java.util.List<? extends message.HSPropInfo.PropInfoOrBuilder> 
        getGiftBagPropInfoListOrBuilderList() {
      return giftBagPropInfoList_;
    }
    public int getGiftBagPropInfoListCount() {
      return giftBagPropInfoList_.size();
    }
    public message.HSPropInfo.PropInfo getGiftBagPropInfoList(int index) {
      return giftBagPropInfoList_.get(index);
    }
    public message.HSPropInfo.PropInfoOrBuilder getGiftBagPropInfoListOrBuilder(
        int index) {
      return giftBagPropInfoList_.get(index);
    }
    
    private void initFields() {
      manualPropInfoList_ = java.util.Collections.emptyList();
      bufferPropInfoList_ = java.util.Collections.emptyList();
      giftBagPropInfoList_ = java.util.Collections.emptyList();
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;
      
      for (int i = 0; i < getManualPropInfoListCount(); i++) {
        if (!getManualPropInfoList(i).isInitialized()) {
          memoizedIsInitialized = 0;
          return false;
        }
      }
      for (int i = 0; i < getBufferPropInfoListCount(); i++) {
        if (!getBufferPropInfoList(i).isInitialized()) {
          memoizedIsInitialized = 0;
          return false;
        }
      }
      for (int i = 0; i < getGiftBagPropInfoListCount(); i++) {
        if (!getGiftBagPropInfoList(i).isInitialized()) {
          memoizedIsInitialized = 0;
          return false;
        }
      }
      memoizedIsInitialized = 1;
      return true;
    }
    
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      for (int i = 0; i < manualPropInfoList_.size(); i++) {
        output.writeMessage(1, manualPropInfoList_.get(i));
      }
      for (int i = 0; i < bufferPropInfoList_.size(); i++) {
        output.writeMessage(2, bufferPropInfoList_.get(i));
      }
      for (int i = 0; i < giftBagPropInfoList_.size(); i++) {
        output.writeMessage(3, giftBagPropInfoList_.get(i));
      }
    }
    
    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;
    
      size = 0;
      for (int i = 0; i < manualPropInfoList_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, manualPropInfoList_.get(i));
      }
      for (int i = 0; i < bufferPropInfoList_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, bufferPropInfoList_.get(i));
      }
      for (int i = 0; i < giftBagPropInfoList_.size(); i++) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(3, giftBagPropInfoList_.get(i));
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
    
    public static message.HSPropInfoData.PropInfoData parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static message.HSPropInfoData.PropInfoData parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static message.HSPropInfoData.PropInfoData parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static message.HSPropInfoData.PropInfoData parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static message.HSPropInfoData.PropInfoData parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static message.HSPropInfoData.PropInfoData parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    public static message.HSPropInfoData.PropInfoData parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static message.HSPropInfoData.PropInfoData parseDelimitedFrom(
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
    public static message.HSPropInfoData.PropInfoData parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static message.HSPropInfoData.PropInfoData parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    
    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(message.HSPropInfoData.PropInfoData prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }
    
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          message.HSPropInfoData.PropInfoData, Builder>
        implements message.HSPropInfoData.PropInfoDataOrBuilder {
      // Construct using message.HSPropInfoData.PropInfoData.newBuilder()
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
        manualPropInfoList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        bufferPropInfoList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
        giftBagPropInfoList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000004);
        return this;
      }
      
      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }
      
      public message.HSPropInfoData.PropInfoData getDefaultInstanceForType() {
        return message.HSPropInfoData.PropInfoData.getDefaultInstance();
      }
      
      public message.HSPropInfoData.PropInfoData build() {
        message.HSPropInfoData.PropInfoData result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }
      
      private message.HSPropInfoData.PropInfoData buildParsed()
          throws com.google.protobuf.InvalidProtocolBufferException {
        message.HSPropInfoData.PropInfoData result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(
            result).asInvalidProtocolBufferException();
        }
        return result;
      }
      
      public message.HSPropInfoData.PropInfoData buildPartial() {
        message.HSPropInfoData.PropInfoData result = new message.HSPropInfoData.PropInfoData(this);
        int from_bitField0_ = bitField0_;
        if (((bitField0_ & 0x00000001) == 0x00000001)) {
          manualPropInfoList_ = java.util.Collections.unmodifiableList(manualPropInfoList_);
          bitField0_ = (bitField0_ & ~0x00000001);
        }
        result.manualPropInfoList_ = manualPropInfoList_;
        if (((bitField0_ & 0x00000002) == 0x00000002)) {
          bufferPropInfoList_ = java.util.Collections.unmodifiableList(bufferPropInfoList_);
          bitField0_ = (bitField0_ & ~0x00000002);
        }
        result.bufferPropInfoList_ = bufferPropInfoList_;
        if (((bitField0_ & 0x00000004) == 0x00000004)) {
          giftBagPropInfoList_ = java.util.Collections.unmodifiableList(giftBagPropInfoList_);
          bitField0_ = (bitField0_ & ~0x00000004);
        }
        result.giftBagPropInfoList_ = giftBagPropInfoList_;
        return result;
      }
      
      public Builder mergeFrom(message.HSPropInfoData.PropInfoData other) {
        if (other == message.HSPropInfoData.PropInfoData.getDefaultInstance()) return this;
        if (!other.manualPropInfoList_.isEmpty()) {
          if (manualPropInfoList_.isEmpty()) {
            manualPropInfoList_ = other.manualPropInfoList_;
            bitField0_ = (bitField0_ & ~0x00000001);
          } else {
            ensureManualPropInfoListIsMutable();
            manualPropInfoList_.addAll(other.manualPropInfoList_);
          }
          
        }
        if (!other.bufferPropInfoList_.isEmpty()) {
          if (bufferPropInfoList_.isEmpty()) {
            bufferPropInfoList_ = other.bufferPropInfoList_;
            bitField0_ = (bitField0_ & ~0x00000002);
          } else {
            ensureBufferPropInfoListIsMutable();
            bufferPropInfoList_.addAll(other.bufferPropInfoList_);
          }
          
        }
        if (!other.giftBagPropInfoList_.isEmpty()) {
          if (giftBagPropInfoList_.isEmpty()) {
            giftBagPropInfoList_ = other.giftBagPropInfoList_;
            bitField0_ = (bitField0_ & ~0x00000004);
          } else {
            ensureGiftBagPropInfoListIsMutable();
            giftBagPropInfoList_.addAll(other.giftBagPropInfoList_);
          }
          
        }
        return this;
      }
      
      public final boolean isInitialized() {
        for (int i = 0; i < getManualPropInfoListCount(); i++) {
          if (!getManualPropInfoList(i).isInitialized()) {
            
            return false;
          }
        }
        for (int i = 0; i < getBufferPropInfoListCount(); i++) {
          if (!getBufferPropInfoList(i).isInitialized()) {
            
            return false;
          }
        }
        for (int i = 0; i < getGiftBagPropInfoListCount(); i++) {
          if (!getGiftBagPropInfoList(i).isInitialized()) {
            
            return false;
          }
        }
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
            case 10: {
              message.HSPropInfo.PropInfo.Builder subBuilder = message.HSPropInfo.PropInfo.newBuilder();
              input.readMessage(subBuilder, extensionRegistry);
              addManualPropInfoList(subBuilder.buildPartial());
              break;
            }
            case 18: {
              message.HSPropInfo.PropInfo.Builder subBuilder = message.HSPropInfo.PropInfo.newBuilder();
              input.readMessage(subBuilder, extensionRegistry);
              addBufferPropInfoList(subBuilder.buildPartial());
              break;
            }
            case 26: {
              message.HSPropInfo.PropInfo.Builder subBuilder = message.HSPropInfo.PropInfo.newBuilder();
              input.readMessage(subBuilder, extensionRegistry);
              addGiftBagPropInfoList(subBuilder.buildPartial());
              break;
            }
          }
        }
      }
      
      private int bitField0_;
      
      // repeated .message.PropInfo manualPropInfoList = 1;
      private java.util.List<message.HSPropInfo.PropInfo> manualPropInfoList_ =
        java.util.Collections.emptyList();
      private void ensureManualPropInfoListIsMutable() {
        if (!((bitField0_ & 0x00000001) == 0x00000001)) {
          manualPropInfoList_ = new java.util.ArrayList<message.HSPropInfo.PropInfo>(manualPropInfoList_);
          bitField0_ |= 0x00000001;
         }
      }
      
      public java.util.List<message.HSPropInfo.PropInfo> getManualPropInfoListList() {
        return java.util.Collections.unmodifiableList(manualPropInfoList_);
      }
      public int getManualPropInfoListCount() {
        return manualPropInfoList_.size();
      }
      public message.HSPropInfo.PropInfo getManualPropInfoList(int index) {
        return manualPropInfoList_.get(index);
      }
      public Builder setManualPropInfoList(
          int index, message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureManualPropInfoListIsMutable();
        manualPropInfoList_.set(index, value);
        
        return this;
      }
      public Builder setManualPropInfoList(
          int index, message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureManualPropInfoListIsMutable();
        manualPropInfoList_.set(index, builderForValue.build());
        
        return this;
      }
      public Builder addManualPropInfoList(message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureManualPropInfoListIsMutable();
        manualPropInfoList_.add(value);
        
        return this;
      }
      public Builder addManualPropInfoList(
          int index, message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureManualPropInfoListIsMutable();
        manualPropInfoList_.add(index, value);
        
        return this;
      }
      public Builder addManualPropInfoList(
          message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureManualPropInfoListIsMutable();
        manualPropInfoList_.add(builderForValue.build());
        
        return this;
      }
      public Builder addManualPropInfoList(
          int index, message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureManualPropInfoListIsMutable();
        manualPropInfoList_.add(index, builderForValue.build());
        
        return this;
      }
      public Builder addAllManualPropInfoList(
          java.lang.Iterable<? extends message.HSPropInfo.PropInfo> values) {
        ensureManualPropInfoListIsMutable();
        super.addAll(values, manualPropInfoList_);
        
        return this;
      }
      public Builder clearManualPropInfoList() {
        manualPropInfoList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000001);
        
        return this;
      }
      public Builder removeManualPropInfoList(int index) {
        ensureManualPropInfoListIsMutable();
        manualPropInfoList_.remove(index);
        
        return this;
      }
      
      // repeated .message.PropInfo bufferPropInfoList = 2;
      private java.util.List<message.HSPropInfo.PropInfo> bufferPropInfoList_ =
        java.util.Collections.emptyList();
      private void ensureBufferPropInfoListIsMutable() {
        if (!((bitField0_ & 0x00000002) == 0x00000002)) {
          bufferPropInfoList_ = new java.util.ArrayList<message.HSPropInfo.PropInfo>(bufferPropInfoList_);
          bitField0_ |= 0x00000002;
         }
      }
      
      public java.util.List<message.HSPropInfo.PropInfo> getBufferPropInfoListList() {
        return java.util.Collections.unmodifiableList(bufferPropInfoList_);
      }
      public int getBufferPropInfoListCount() {
        return bufferPropInfoList_.size();
      }
      public message.HSPropInfo.PropInfo getBufferPropInfoList(int index) {
        return bufferPropInfoList_.get(index);
      }
      public Builder setBufferPropInfoList(
          int index, message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureBufferPropInfoListIsMutable();
        bufferPropInfoList_.set(index, value);
        
        return this;
      }
      public Builder setBufferPropInfoList(
          int index, message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureBufferPropInfoListIsMutable();
        bufferPropInfoList_.set(index, builderForValue.build());
        
        return this;
      }
      public Builder addBufferPropInfoList(message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureBufferPropInfoListIsMutable();
        bufferPropInfoList_.add(value);
        
        return this;
      }
      public Builder addBufferPropInfoList(
          int index, message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureBufferPropInfoListIsMutable();
        bufferPropInfoList_.add(index, value);
        
        return this;
      }
      public Builder addBufferPropInfoList(
          message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureBufferPropInfoListIsMutable();
        bufferPropInfoList_.add(builderForValue.build());
        
        return this;
      }
      public Builder addBufferPropInfoList(
          int index, message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureBufferPropInfoListIsMutable();
        bufferPropInfoList_.add(index, builderForValue.build());
        
        return this;
      }
      public Builder addAllBufferPropInfoList(
          java.lang.Iterable<? extends message.HSPropInfo.PropInfo> values) {
        ensureBufferPropInfoListIsMutable();
        super.addAll(values, bufferPropInfoList_);
        
        return this;
      }
      public Builder clearBufferPropInfoList() {
        bufferPropInfoList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000002);
        
        return this;
      }
      public Builder removeBufferPropInfoList(int index) {
        ensureBufferPropInfoListIsMutable();
        bufferPropInfoList_.remove(index);
        
        return this;
      }
      
      // repeated .message.PropInfo giftBagPropInfoList = 3;
      private java.util.List<message.HSPropInfo.PropInfo> giftBagPropInfoList_ =
        java.util.Collections.emptyList();
      private void ensureGiftBagPropInfoListIsMutable() {
        if (!((bitField0_ & 0x00000004) == 0x00000004)) {
          giftBagPropInfoList_ = new java.util.ArrayList<message.HSPropInfo.PropInfo>(giftBagPropInfoList_);
          bitField0_ |= 0x00000004;
         }
      }
      
      public java.util.List<message.HSPropInfo.PropInfo> getGiftBagPropInfoListList() {
        return java.util.Collections.unmodifiableList(giftBagPropInfoList_);
      }
      public int getGiftBagPropInfoListCount() {
        return giftBagPropInfoList_.size();
      }
      public message.HSPropInfo.PropInfo getGiftBagPropInfoList(int index) {
        return giftBagPropInfoList_.get(index);
      }
      public Builder setGiftBagPropInfoList(
          int index, message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureGiftBagPropInfoListIsMutable();
        giftBagPropInfoList_.set(index, value);
        
        return this;
      }
      public Builder setGiftBagPropInfoList(
          int index, message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureGiftBagPropInfoListIsMutable();
        giftBagPropInfoList_.set(index, builderForValue.build());
        
        return this;
      }
      public Builder addGiftBagPropInfoList(message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureGiftBagPropInfoListIsMutable();
        giftBagPropInfoList_.add(value);
        
        return this;
      }
      public Builder addGiftBagPropInfoList(
          int index, message.HSPropInfo.PropInfo value) {
        if (value == null) {
          throw new NullPointerException();
        }
        ensureGiftBagPropInfoListIsMutable();
        giftBagPropInfoList_.add(index, value);
        
        return this;
      }
      public Builder addGiftBagPropInfoList(
          message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureGiftBagPropInfoListIsMutable();
        giftBagPropInfoList_.add(builderForValue.build());
        
        return this;
      }
      public Builder addGiftBagPropInfoList(
          int index, message.HSPropInfo.PropInfo.Builder builderForValue) {
        ensureGiftBagPropInfoListIsMutable();
        giftBagPropInfoList_.add(index, builderForValue.build());
        
        return this;
      }
      public Builder addAllGiftBagPropInfoList(
          java.lang.Iterable<? extends message.HSPropInfo.PropInfo> values) {
        ensureGiftBagPropInfoListIsMutable();
        super.addAll(values, giftBagPropInfoList_);
        
        return this;
      }
      public Builder clearGiftBagPropInfoList() {
        giftBagPropInfoList_ = java.util.Collections.emptyList();
        bitField0_ = (bitField0_ & ~0x00000004);
        
        return this;
      }
      public Builder removeGiftBagPropInfoList(int index) {
        ensureGiftBagPropInfoListIsMutable();
        giftBagPropInfoList_.remove(index);
        
        return this;
      }
      
      // @@protoc_insertion_point(builder_scope:message.PropInfoData)
    }
    
    static {
      defaultInstance = new PropInfoData(true);
      defaultInstance.initFields();
    }
    
    // @@protoc_insertion_point(class_scope:message.PropInfoData)
  }
  
  
  static {
  }
  
  // @@protoc_insertion_point(outer_class_scope)
}