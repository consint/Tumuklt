namespace project
{

struct sntumult_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "sntumult";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "2667.nT6K8ClYZ0vT.nZRz2.KfBYCMf3tDBXFQfirUAXR3St9d8XYnPD8jbqE1p4NLd4SgSTqNTBqS6m0Qx.1.zL.YCPk+C4pAq8zZtDPk0vog8gfinxnogwsvWtbsfLWcEOewseuHDrtZZy.FCeouRHJCVH2Ip7zCfLfvTTaFzzwXrtQfZm6W8UzVCIMObn7zkJSzOgC2uXbvA4aVat1GPWQuiDWjdO.mDD00ximhCD0nz8lx5K9Qzvrt15MCXcLH+Gow5YcE+mv3QZvS2MXNtEtimtVWN.YKUg0dIMrHLmeqxr.lDziElJe6TanW.MLo9kiLV6NzEiuggi1azzvdZ+jFF0NysvRf00WSWcJ9+PC6hLhzv9vZCRGuQv9BiEEYw+NRnxWG7NPpbSFcUtquz3efw.41ADlL4tEtZawQcBszp8ACUtessdCf0dbgrnudr0XdI9L8r0Uu43evwdG1aFctpL9pwYyVctPtroqoL08ZUokZeGbbQX8EhScY4NU8SDo4QusnfgixUdH9+Y6b+1wO40fVWSVgvVcZeO363v7KVi63o7Azs2s3hLXwVsAoSaTNoyFL1j+j+Y86zteYAKRukj3XKoHbQFLaC5h0Hk1nu2K9H+JZXff+nByMctlM5ZNBjgbkJbOP7Vt.lMaUYSFoxBbfpprFpeYyirtRu.ZNRILAwXbNeNmojRczJkVsujoSNsOozVQKFy.Qgut.1BiNdOb+CnqGYtZNdIbvNoV2Kgwi3an5pwshBTPEnvDzviflHbTD1ioFvbfiwNGcYgE1BVmuL.mNCUFCEPBJGkm5XNtC1CCUVpu2StF0FqVKr4ZPIXdvVPPki+SGBags0OIhk.zbTzXtELOuodA3zz7H8QbwZnmKhDTOCREFq5psvX3AOEMdG1z0F+DQrvQ2Kg7SdO7mNIbNJN3jMJ8AxVqCDatIcpq8zDNnEWkVqgvW5EABav268dOpMZcOnz9Qv0WvQgg3BNVXE9hV4zNexmZsRIZIhnDQ3OzZqxnyYelze.THgiCNeP6bVAE1dP4iyRha.b3NsBqt4j5dncKTvBIqABbtn6AgOWFqHm2+OXdF8k59A3eGW+xEKQ.CL53JO7Zw5r9bSvzWHIvyfo0ZqUqeH372CVqPniReOJNfqwDeO7d+bZ4iK9cWjQpMRiTa80rQaEODday.upjRszVkBkvXcFghJIKWv.WJsTI8I38nJAAOjYnYFg...D.hlA..hDnGDpD6bfXHQgSg.gQBvwvAfAHv.LN...L.CA.HBL.yPiQhL.fQ8Q9WoK.LyXlQsTSuUR5pYxJLoKsjoyNW4sTEjihzmv9oxPJSFHlnwoXp0oZKqVMlEV+nctCaE1QpvWl.mIdejaJrX6EGHlIKdlwEOkQRnoZtkIFBrTP5k0zgFd4MJiqKuo1yAzHAdyT8yl5+5.DuVI2uthmjd3QnfcWIbujx1ibKGbwRCIUmIdbIpNhbd+Mh2GV0RAcVmLGbRFyHebqkLBW6jMlrxRuqEZVOWDMT.t3Ec0Cb3iyUhInZZT0eqqqVF0tkExERIKcD3nyB1WY3D9rRNkOZG6EvAura6aLXHKk2GWDP8wcUspTARQk9pxc8Hxhk.iU+PHoBSgYAlmCOcdUFnLhBdpLR0lVlKVXrmuOjRZeI1arp0Cv6MiRvnrbM2kc2GuQRC4f0JSNs4Q1JBYUkvGmuurUGxcCmSHrEUpKdUiTBDTHXoesvqVheo0rgEfJ787PhKdCUQtN4TpvdiRzqV1gZGyZJmaZT6QaSIw9v5.PwVnBROQ0iPElEaaS4PqKl1fry4Dmbog8jEMVyG92kRP0gjLbiQ1KJtZ7UdUer2DCxZj1AFmzx7BRdG9PyRreDpJk7UU3dmEqaKEsJzAWRFxHMzHz6tBHmKCwwzx0rsPy4pXnk6uFRZD.JE.9N7rWMzDGauNYtB8GcYys5BLMjv5DN18sZkeI0pTtHbaGn1S3lyYUtB6dluflKazxoFA70AaNWM.b0EXi70eIQGJ9nPc1uA6bNoIs.n6QKrcYtgvcQmhoZNeNsB705RSYjgjSsLlY3vujaREC9HzQ9aoa3V2CZ89zU6l+A45LSC.Vjiepla4IgXrAleW36fusO8RCe7mOUHtcaGUP6vKvjg5Cc+cjoIYp67.K11.m1.jrDqTUjx3pq7.H3X6Dy37mNg1KuUdbsN2+aPDBAklwv6lPobj.BbtfolbaiX0mk6r.J.JDyHLDfda89MJnV6jiKjyJLo+WfB9Z6H2ZVd6tVPTgOOv85NG8Qo9+nCONX9nYXe7bos9G3M.nZmWWHdBbYBBLVRxuRyxzBM0DNe..6m2g3Gog8LW0lPdnNSEOkMPbVZSTchYTP7D4d01CrrsM1Fjngy8LoZ7zI.r.XSiJfmJAd+Zn1wYOHQ3fqXdItr2AWSHtKXWQ0JrSSxSuFMI4RgK67EvW+InTsDB5vDnKSJN7OTP8p7iAkTx6NKOsZfbg2HEkKouG+Hrd16hYUZb.7Xthm3+6h23BdsjUckM9EgeSVzFPVx7gR+2E0gPcFofoE+KdHBK9dqT+Rv2vz5x2dGTBJ1F0yBS4hkQmiIG.RsrAmkdbgUTNVb0VM4xpt7zgBwQqeKK.SsPp9oSgfPJFbUx9Aa3N7Wfkxpr.ySmR+Z1dppVK4Zkq3bnRrUfBesoXc3sSd+yFz2HX3g.eDI3oQveGuy+DH.t.hAvI5X4MRA5inr593FiAauPclk3QQJMP6COJHOqHEXNPL6iGgU4AElonSaQglL.+6XnFGM39jnkZyTs8Gu1viXiDX4m63M4PXSwmHYbVAqWVQ96ne8QGH.cHuF.u0C5ITCxs35xHJ3Ib4vMloh2mECzOIP3z2ftcMjLkh4af69AzPFpyPp44Vb3UyWjDJlQXGsOpLhji1HRk+syx7Jt0SQU0R3EagavLD+Nil1W.VVkf5blndSygHXDwTTpfYqJHtu8U2z1XvRml.vr1SYgslYe60xsefcvfKolTRdFfBS9BxvED8Hr0VQrNleivDEUVcDRoR2cP333vdBo01Gx752+QH1Cw.TP3SQx4uBZP0ytam75AuyFJ4LZxnfkwfVnWKx8p3nGeYQLHT8rmXal8IGmf4NxI4233fh5fX2Z.r.8fet.yz6.hkOJb.vi3epA3CSYK79XHekpE2RrVZsdk9f8NgEwAtkKgfLxYbHV8FWXCvv2r03jVKFhoOR.CFO+bPTBTh0NfsbQ7IqqlCkcedCFPsdkn9TSsZBS7WDxtDPAkPv3LSCKIK2gpRfSkucQEDxG0XPd9xIcQraQ92Fkd64VYJgbV8sqsp+mTxVpF29TOR1B.NqI1SxhloPg3Z6COs4miPSwi7SCfiNU5lVDfTlHhH8PSHIsffeQoGDefmjuxyAq44A7gphYwNvJDY7ff1s5acvgAMCWu6yHBcSFWtgqC9Gu2RvnNXtJtHkz6uO4fE+RarijwuErJAqdS3mXq.0SmBUMrDUIDmyKXsyKfYi6u5KFlcNnktrPssuBJrgRoXcOOPQvPIXUWYA1uKs9srsVHWHurjm24mY284u8.";
	}
};
}

