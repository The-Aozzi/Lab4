#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
    // Read image
    cv::Mat src = cv::imread("U:/ProgLabs/Lab4/img/input_image.jpg", cv::IMREAD_GRAYSCALE);
    cv::Mat dst;

    // Basic threhold example
    threshold(src, dst, 0, 255, cv::THRESH_BINARY);
    imwrite("U:/ProgLabs/Lab4/img/0-opencv-threshold-example.jpg", dst);

    // Thresholding with maxval set to 128
    threshold(src, dst, 0, 128, cv::THRESH_BINARY);
    imwrite("U:/ProgLabs/Lab4/img/1-opencv-thresh-binary-maxval.jpg", dst);

    // Thresholding with threshold value set 127
    threshold(src, dst, 127, 255, cv::THRESH_BINARY);
    imwrite("U:/ProgLabs/Lab4/img/2-opencv-thresh-binary.jpg", dst);

    // Thresholding using THRESH_BINARY_INV
    threshold(src, dst, 127, 255, cv::THRESH_BINARY_INV);
    imwrite("U:/ProgLabs/Lab4/img/3-opencv-thresh-binary-inv.jpg", dst);

    // Thresholding using THRESH_TRUNC
    threshold(src, dst, 127, 255, cv::THRESH_TRUNC);
    imwrite("U:/ProgLabs/Lab4/img/4-opencv-thresh-trunc.jpg", dst);

    // Thresholding using THRESH_TOZERO
    threshold(src, dst, 127, 255, cv::THRESH_TOZERO);
    imwrite("U:/ProgLabs/Lab4/img/5-opencv-thresh-tozero.jpg", dst);

    // Thresholding using THRESH_TOZERO_INV
    threshold(src, dst, 127, 255, cv::THRESH_TOZERO_INV);
    imwrite("U:/ProgLabs/Lab4/img/6-opencv-thresh-to-zero-inv.jpg", dst);
}