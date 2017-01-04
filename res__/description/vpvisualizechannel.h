#ifndef VPVISUALIZECHANNEL_H__
#define VPVISUALIZECHANNEL_H__

enum
{
	VP_VISUALIZE_CHANNEL_STRENGTH = 1000,
	VP_VISUALIZE_CHANNEL_CHN = 1001,
		VP_VISUALIZE_CHANNEL_CHN_UVW = 1,
		VP_VISUALIZE_CHANNEL_CHN_DU = 2,
		VP_VISUALIZE_CHANNEL_CHN_DV = 3,
		VP_VISUALIZE_CHANNEL_CHN_NORMAL = 4,
		VP_VISUALIZE_CHANNEL_CHN_DEPTH = 5,
		VP_VISUALIZE_CHANNEL_CHN_MAT_ID = 6,
		VP_VISUALIZE_CHANNEL_CHN_WORLD_COORDINATES = 7,
		VP_VISUALIZE_CHANNEL_CHN_OBJECTID = 8,
	VP_VISUALIZE_CHANNEL_LOCLIP = 1002,
	VP_VISUALIZE_CHANNEL_HICLIP = 1003
};

#endif // VPVISUALIZECHANNEL_H__
