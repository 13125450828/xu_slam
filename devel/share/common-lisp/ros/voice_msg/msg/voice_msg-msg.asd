
(cl:in-package :asdf)

(defsystem "voice_msg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Command" :depends-on ("_package_Command"))
    (:file "_package_Command" :depends-on ("_package"))
    (:file "Navigation" :depends-on ("_package_Navigation"))
    (:file "_package_Navigation" :depends-on ("_package"))
    (:file "Motion" :depends-on ("_package_Motion"))
    (:file "_package_Motion" :depends-on ("_package"))
    (:file "Transmit" :depends-on ("_package_Transmit"))
    (:file "_package_Transmit" :depends-on ("_package"))
    (:file "recog_result" :depends-on ("_package_recog_result"))
    (:file "_package_recog_result" :depends-on ("_package"))
    (:file "Command" :depends-on ("_package_Command"))
    (:file "_package_Command" :depends-on ("_package"))
    (:file "Navigation" :depends-on ("_package_Navigation"))
    (:file "_package_Navigation" :depends-on ("_package"))
    (:file "Motion" :depends-on ("_package_Motion"))
    (:file "_package_Motion" :depends-on ("_package"))
    (:file "Transmit" :depends-on ("_package_Transmit"))
    (:file "_package_Transmit" :depends-on ("_package"))
    (:file "recog_result" :depends-on ("_package_recog_result"))
    (:file "_package_recog_result" :depends-on ("_package"))
  ))