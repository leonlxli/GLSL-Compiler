vec2 a;

float assignvec() 
{
   float t;
   vec4 v4;

   t = 0.5;

   v4.xy = a;
   v4.z = v4.w = t;
   if(v4.z==v4.w){
   	return v4.z;
   }
   else{
   	return v4.w;
   }
   return v4.x + v4.y + v4.z + v4.w;
} 