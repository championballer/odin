#include <librealsense2/rs.hpp>
#include <iostream>

int main()
{
	rs2::pipeline p;
	p.start();
	
	while(true)
	{
		rs2::frameset frames = p.wait_for_frames();
		
		rs2::depth_frame depth = frames.get_depth_frame();
		
		float width = depth.get_width();
		float height = depth.get_height();
		
		float distance = depth.get_distance(width/2,height/2);
		
		std::cout<<"The camera's center is "<<distance<<" from an object \r"; 
	}
}

