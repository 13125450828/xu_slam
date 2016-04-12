; Auto-generated. Do not edit!


(cl:in-package voice_msg-msg)


;//! \htmlinclude Command.msg.html

(cl:defclass <Command> (roslisp-msg-protocol:ros-message)
  ((my_motion
    :reader my_motion
    :initarg :my_motion
    :type voice_msg-msg:Motion
    :initform (cl:make-instance 'voice_msg-msg:Motion))
   (my_navigation
    :reader my_navigation
    :initarg :my_navigation
    :type voice_msg-msg:Navigation
    :initform (cl:make-instance 'voice_msg-msg:Navigation))
   (my_send
    :reader my_send
    :initarg :my_send
    :type voice_msg-msg:Transmit
    :initform (cl:make-instance 'voice_msg-msg:Transmit))
   (my_get
    :reader my_get
    :initarg :my_get
    :type voice_msg-msg:Transmit
    :initform (cl:make-instance 'voice_msg-msg:Transmit)))
)

(cl:defclass Command (<Command>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Command>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Command)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name voice_msg-msg:<Command> is deprecated: use voice_msg-msg:Command instead.")))

(cl:ensure-generic-function 'my_motion-val :lambda-list '(m))
(cl:defmethod my_motion-val ((m <Command>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader voice_msg-msg:my_motion-val is deprecated.  Use voice_msg-msg:my_motion instead.")
  (my_motion m))

(cl:ensure-generic-function 'my_navigation-val :lambda-list '(m))
(cl:defmethod my_navigation-val ((m <Command>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader voice_msg-msg:my_navigation-val is deprecated.  Use voice_msg-msg:my_navigation instead.")
  (my_navigation m))

(cl:ensure-generic-function 'my_send-val :lambda-list '(m))
(cl:defmethod my_send-val ((m <Command>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader voice_msg-msg:my_send-val is deprecated.  Use voice_msg-msg:my_send instead.")
  (my_send m))

(cl:ensure-generic-function 'my_get-val :lambda-list '(m))
(cl:defmethod my_get-val ((m <Command>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader voice_msg-msg:my_get-val is deprecated.  Use voice_msg-msg:my_get instead.")
  (my_get m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Command>) ostream)
  "Serializes a message object of type '<Command>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'my_motion) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'my_navigation) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'my_send) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'my_get) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Command>) istream)
  "Deserializes a message object of type '<Command>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'my_motion) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'my_navigation) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'my_send) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'my_get) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Command>)))
  "Returns string type for a message object of type '<Command>"
  "voice_msg/Command")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Command)))
  "Returns string type for a message object of type 'Command"
  "voice_msg/Command")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Command>)))
  "Returns md5sum for a message object of type '<Command>"
  "93cb2845c321adf1c318805c4ffd4891")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Command)))
  "Returns md5sum for a message object of type 'Command"
  "93cb2845c321adf1c318805c4ffd4891")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Command>)))
  "Returns full string definition for message of type '<Command>"
  (cl:format cl:nil "Motion my_motion~%Navigation my_navigation~%Transmit my_send~%Transmit my_get~%~%================================================================================~%MSG: voice_msg/Motion~%bool motion~%int64 direction~%int64 pattern~%int64 stepcount~%~%~%================================================================================~%MSG: voice_msg/Navigation~%bool navigation
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Command)))
  "Returns full string definition for message of type 'Command"
  (cl:format cl:nil "Motion my_motion~%Navigation my_navigation~%Transmit my_send~%Transmit my_get~%~%================================================================================~%MSG: voice_msg/Motion~%bool motion~%int64 direction~%int64 pattern~%int64 stepcount~%~%~%================================================================================~%MSG: voice_msg/Navigation~%bool navigation
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Command>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'my_motion))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'my_navigation))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'my_send))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'my_get))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Command>))
  "Converts a ROS message object to a list"
  (cl:list 'Command
    (cl:cons ':my_motion (my_motion msg))
    (cl:cons ':my_navigation (my_navigation msg))
    (cl:cons ':my_send (my_send msg))
    (cl:cons ':my_get (my_get msg))
))