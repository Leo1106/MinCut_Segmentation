#include <iostream> 
#include <fstream> 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include <pcl/io/pcd_io.h> 
#include <pcl/io/ply_io.h>
#include <pcl/io/vtk_io.h>
#include <pcl/io/obj_io.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h> 
#include <pcl/visualization/cloud_viewer.h>  

typedef pcl::PointXYZRGBA PointT;
typedef pcl::PointCloud<PointT> PointCloudT;

bool endWith(const char * str, const char * end) {
	bool result = false;

	if (str != NULL && end != NULL) {
		int l1 = strlen(str);
		int l2 = strlen(end);
		if (l1 >= l2) {
			if (strcmp(str + l1 - l2, end) == 0) {
				result = true;
			}
		}
	}

	return result;
}



class MinCutSegmentation
{

public:

	void open(const char * filename);

private:

	
};