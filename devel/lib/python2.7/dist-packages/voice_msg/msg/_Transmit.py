# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from voice_msg/Transmit.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Transmit(genpy.Message):
  _md5sum = "99c7f83694b9f3c2c39a66d868b1bbeb"
  _type = "voice_msg/Transmit"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool transmit
int64 object
int64 didian

"""
  __slots__ = ['transmit','object','didian']
  _slot_types = ['bool','int64','int64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       transmit,object,didian

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Transmit, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.transmit is None:
        self.transmit = False
      if self.object is None:
        self.object = 0
      if self.didian is None:
        self.didian = 0
    else:
      self.transmit = False
      self.object = 0
      self.didian = 0

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
      buff.write(_struct_B2q.pack(_x.transmit, _x.object, _x.didian))
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
      end += 17
      (_x.transmit, _x.object, _x.didian,) = _struct_B2q.unpack(str[start:end])
      self.transmit = bool(self.transmit)
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
      buff.write(_struct_B2q.pack(_x.transmit, _x.object, _x.didian))
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
      end += 17
      (_x.transmit, _x.object, _x.didian,) = _struct_B2q.unpack(str[start:end])
      self.transmit = bool(self.transmit)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B2q = struct.Struct("<B2q")
