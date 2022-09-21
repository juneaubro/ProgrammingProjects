namespace TestApp{
    class Circle{
        float mX;
        float mY;
        float mRadius;

        public override string ToString()
        {
            return $"x: {mX}\ny: {mY}\nz: {mRadius}";
        }

        public float MX(){return mX;}
        public float MY(){return mY;}
        public float MRadius(){return mRadius;}

        public Circle(float mX,int mY,int mRadius){
            this.mX=mX;
            this.mY=mY;
            this.mRadius=mRadius;
        }
    }
}