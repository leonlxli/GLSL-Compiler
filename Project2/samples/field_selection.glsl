/* field selection 
   Note: Identifiers may be FieldAccess or VarExpr. Either is acceptable.
*/

void main() {
	int i = 0;
	int j = 1;
 	vec4 myVar;
	vec2 a;
	vec2 b;
	a = myVar.xy; // pick first/second components
	b = myVar.xz; // pick first/third components
 } 