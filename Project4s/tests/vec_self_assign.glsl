vec3 v3a; // 5.0, 6.0, 7.0
vec3 v3b; //10.0, 20.0, 10.0

float main() {
    v3a += 1.0; // 6.0, 7.0, 8.0
    v3a *= v3b; // 50.0, 140.0, 80.0
    return v3a.y;
}
