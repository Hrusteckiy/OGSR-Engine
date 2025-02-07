/*
    Common functions used by lighting
    Material table

    /////////////////
    Anomaly Team 2020
    /////////////////
*/

#ifndef BRDF_H_INCLUDED
#define BRDF_H_INCLUDED

////////////////////////
// Material table
#define MAT_FLORA 0.15f

// Simple subsurface scattering
float SSS(float3 N, float3 V, float3 L)
{
    float intensity = 0.5f;
    float S = saturate(dot(V, -(L + N))) * intensity;
    return S;
}

#endif
