import rclpy
from rclpy.node import Node
from camera_msg.srv import CameraStatus


class Client(Node):
    def __init__(self):
        super().__init__('client')

        self.client = self.create_client(CameraStatus, 'camera_stream_service')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available....')
        
        self.request = CameraStatus.Request()
    
    def send_request(self, a, b):
        self.request.command = a
        self.request.camera_id = b

        self.future = self.client.call_async(self.request)


        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main():
    rclpy.init()

    client = Client()
    response = client.send_request('on', 'left_camera')

    if response is not None:
        client.get_logger().info(f'Received: {response}')

    
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
