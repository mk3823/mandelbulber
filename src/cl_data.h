
typedef struct
{
	cl_float4 m1;
	cl_float4 m2;
	cl_float4 m3;
} matrix33;

typedef struct
{
	cl_float scale;
	cl_float foldingLimit;
	cl_float foldingValue;
	cl_float fixedRadius;
	cl_float minRadius;
	matrix33 mainRot;
} sClMandelbox;

typedef struct
{
	cl_int absX;
	cl_int absY;
	cl_int absZ;
	cl_int enabled[9];
	cl_int mengerSpongeMode;
	matrix33 mainRot;
	matrix33 rot[9];
	cl_float rotationAlpha;
	cl_float rotationBeta;
	cl_float rotationGamma;
	cl_float scale;
	cl_float distance[9];
	cl_float alpha[9];
	cl_float beta[9];
	cl_float gamma[9];
	cl_float intensity[9];
	cl_float4 offset;
	cl_float4 direction[9];
	cl_float4 edge;
} sClIFS;

typedef struct
{
	cl_uint N;
	cl_float power;
	cl_int formula;
	cl_float4 julia;
	sClMandelbox mandelbox;
	sClIFS ifs;
	cl_int juliaMode;
} sClFractal;

typedef struct
{
	cl_int width;
	cl_int height;
	cl_float alpha;
	cl_float beta;
	cl_float gamma;
	cl_float zoom;
	cl_float persp;
	cl_float DEfactor;
	cl_float4 vp;
} sClParams;

typedef struct
{
	cl_ushort R;
	cl_ushort G;
	cl_ushort B;
	cl_float zBuffer;
} sClPixel;