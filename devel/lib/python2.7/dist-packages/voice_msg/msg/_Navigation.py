# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from voice_msg/Navigation.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Navigation(genpy.Message):
  _md5sum = "bf6e0630035008c8fd093b1b103c4e65"
  _type = "voice_msg/Navigation"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool navigation
int64 go
int64 direct
int64 columnNum
int64 rowNum

"""
  __slots__ = ['navigation','go','direct','columnNum','rowNum']
  _slot_types = ['bool','int64','int64','int64','int64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       navigation,go,direct,columnNum,rowNum

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Navigation, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.navigation is None:
        self.navigation = False
      if self.go is None:
        self.go = 0
      if self.direct is None:
        self.direct = 0
      if self.columnNum is None:
        self.columnNum = 0
      if self.rowNum is None:
        self.rowNum = 0
    else:
      self.navigation = False
      self.go = 0
      self.direct = 0
      self.columnNum = 0
      self.rowNum = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_B4q.pack(_x.navigation, _x.go, _x.direct, _x.columnNum, _x.rowNum))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 33
      (_x.navigation, _x.go, _x.direct, _x.columnNum, _x.rowNum,) = _struct_B4q.unpack(str[start:end])
      self.navigation = bool(self.navigation)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_B4q.pack(_x.navigation, _x.go, _x.direct, _x.columnNum, _x.rowNum))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 33
      (_x.navigation, _x.go, _x.direct, _x.columnNum, _x.rowNum,) = _struct_B4q.unpack(str[start:end])
      self.navigation = bool(self.navigation)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B4q = struct.Struct("<B4q")