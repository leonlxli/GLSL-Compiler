/* field selection 
   Note: Identifiers may be FieldAccess or VarExpr. Either is acceptable.
*/

void main() {
	int i;
	int j;
	i = 0;
	j = 1;
 	vec4 myVar;
	vec3 a;
	vec2 b;
	a = myVar.xyzw; // pick first/second components
	b = myVar.xz; // pick first/third components
 } 