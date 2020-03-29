<div align = "center">

### Output of the model (Sigmoid Activation) : 

<img src="https://render.githubusercontent.com/render/math?math=y = \frac{1}{1%2Be^{-y_{in}}}" width=100px height=30px>
</div>

<div align = "center">

### Hidden layer output (ReLU Activation) : 
<img src="https://render.githubusercontent.com/render/math?math=h = \max(a_{in},0)" width=100px height=30px>

</div>

<div align = "center">

### Loss function for the model (Squared mean error) :
<img src="https://render.githubusercontent.com/render/math?math=Loss = (y-t)^2" width=100px height=20px>
</div>

<div align = "center">

### Derivative of Loss w.r.t. w<sub>211</sub>
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{211}} = \frac{\partial L}{\partial y} \ast \frac{\partial y}{\partial y_{in}} \ast \frac{\partial y_{in}}{\partial w_{211}}" width=200px height=40px>
</div>

<div align = "center">
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{211}} = \frac{2(y-t)}{1%2Be^{-y_{in}}} \ast {e^{-y_{in}}} \ast h_1" width=200px height=40px>
</div>
<div align = "center">
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{211}} = \frac{2(0.9975)}{1%2Be^{-6}} \ast {e^{-6}} \ast 2" width=200px height=40px>
</div>
<div align = "center">
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{211}} = 9.8657 * 10^{{-3}}" width=200px height=40px>
</div>
<div align = "center">
The gradient for other weights in the layer can also be derived in a similar manner.
</div>

<div align = "center">

### Derivative of Loss w.r.t. w<sub>111</sub>
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{111}} = \frac{\partial L}{\partial y} \ast \frac{\partial y}{\partial y_{in}} \ast \frac{\partial y_{in}}{\partial h_1} \ast \frac{\partial h_1}{\partial a_1} \ast \frac{\partial a_1}{\partial w_{111}}" width=300px height=40px>
</div>

<div align = "center">
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{111}} = \frac{2(y-t)}{1%2Be^{-y_{in}}} \ast {e^{-y_{in}}} \ast w_{211} \ast 1 \ast x_1" width=300px height=40px>
</div>
<div align = "center">
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{111}} = \frac{2(0.9975)}{1%2Be^{-6}} \ast {e^{-6}} \ast 1 \ast 1 \ast -1" width=300px height=40px>
</div>
<div align = "center">
<img src="https://render.githubusercontent.com/render/math?math=\frac{\partial L}{\partial w_{111}} = -4.9328 * 10^{{-3}}" width=200px height=40px>
</div>
<div align = "center">
The gradient for other weights in the layer can also be derived in a similar manner.
</div>
