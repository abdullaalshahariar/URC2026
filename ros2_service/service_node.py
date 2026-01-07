import rclpy
from rclpy.node import Node
from camera_msg.srv import CameraStatus 


class ServiceNode(Node):
    def __init__(self):
        super().__init__('camera_stream_service')
        self.serv = self.create_service(CameraStatus, 'camera_stream_service', self.camera_callback)
    
    def camera_callback(self, request, response):
        command = request.a
        id = request.b


        print(id)
        return response



def main():
    rclpy.init()
    serv = ServiceNode()
    rclpy.spin(serv)
    rclpy.shutdown()

if __name__ == '__main__':
    main()