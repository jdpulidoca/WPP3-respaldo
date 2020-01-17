`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:22 12/02/2019 
// Design Name: 
// Module Name:    cam_read 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cam_read #(
		parameter AW = 15 // Cantidad de bits  de la dirección 
		)(
		input pclk,
		input rst,
		input vsync,
		input href,
		input [7:0] px_data,

		output reg [AW-1:0] mem_px_addr,
		output reg [7:0]  mem_px_data,
		output reg px_wr
   );
	

/********************************************************************************

Por favor colocar en este archivo el desarrollo realizado por el grupo para la 
captura de datos de la camara 

debe tener en cuenta el nombre de las entradas  y salidad propuestas 

********************************************************************************/
 reg contador=1'b0;
	 reg [14:0]addr=0;
always @ (negedge pclk) begin
	if	(vsync==0) begin
		if	(href==1) begin
		px_wr=0;
			if	(contador==0)begin
				mem_px_data[7]=px_data[7];
				mem_px_data[6]=px_data[6];
				mem_px_data[5]=px_data[5];
				mem_px_data[4]=px_data[2];
				mem_px_data[3]=px_data[1];
				mem_px_data[2]=px_data[0];
			end
			if	(contador==1)begin
				mem_px_data[1]=px_data[4];
				mem_px_data[0]=px_data[3];
				px_wr=1;
				mem_px_addr<=addr;
				addr=addr+1;
			end
		contador=contador+1;
		end
	end
	if(vsync==1 || rst==1) begin
	mem_px_addr<=0;
	addr=0;
	end
end

endmodule
