"""autogenerated by genpy from laser/LaserLikihood.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class LaserLikihood(genpy.Message):
  _md5sum = "e4d03bcd89c263368f27f8d90957a312"
  _type = "laser/LaserLikihood"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int16 rweight
int16 mrweight
int16 mlweight
int16 lweight

"""
  __slots__ = ['rweight','mrweight','mlweight','lweight']
  _slot_types = ['int16','int16','int16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       rweight,mrweight,mlweight,lweight

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LaserLikihood, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.rweight is None:
        self.rweight = 0
      if self.mrweight is None:
        self.mrweight = 0
      if self.mlweight is None:
        self.mlweight = 0
      if self.lweight is None:
        self.lweight = 0
    else:
      self.rweight = 0
      self.mrweight = 0
      self.mlweight = 0
      self.lweight = 0

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
      buff.write(_struct_4h.pack(_x.rweight, _x.mrweight, _x.mlweight, _x.lweight))
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
      end += 8
      (_x.rweight, _x.mrweight, _x.mlweight, _x.lweight,) = _struct_4h.unpack(str[start:end])
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
      buff.write(_struct_4h.pack(_x.rweight, _x.mrweight, _x.mlweight, _x.lweight))
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
      end += 8
      (_x.rweight, _x.mrweight, _x.mlweight, _x.lweight,) = _struct_4h.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4h = struct.Struct("<4h")