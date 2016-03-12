vec2 v2;

float main() {
    vec4 v4;
    v4.xy = v2;
    //v4.y = v2.y;
    return v4.x + v4.y;
}