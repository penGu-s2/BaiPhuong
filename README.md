SPQuery qryTraLai = new SPQuery();
                            qryTraLai.Query = @"<Where>
    <And>
        <And>
            <Leq>
                <FieldRef Name='NgayTiepNhan' />
                <Value Type='DateTime' IncludeTimeValue='FALSE'>" + ngayketthucDT.ToString("s", System.Globalization.CultureInfo.InvariantCulture) + @"</Value>
            </Leq>
            <Eq>
                <FieldRef Name='DonVi' />
                <Value Type='Text'>" + donvihientai + @"</Value>
            </Eq>
        </And>
        <And>
            <In>
                <FieldRef Name='TrangThaiMa' />
                <Values>
                    <Value Type='Text'>KGQ</Value>
                    <Value Type='Text'>KHL</Value>
                </Values>
            </In>
            <And>
                <Geq>
                    <FieldRef Name='NgayTraKetQua' />
                    <Value Type='DateTime' IncludeTimeValue='FALSE'>" + ngaybatdauDT.ToString("s", System.Globalization.CultureInfo.InvariantCulture) + @"</Value>
                </Geq>
                <Leq>
                    <FieldRef Name='NgayTraKetQua' />
                    <Value Type='DateTime' IncludeTimeValue='FALSE'>" + ngayketthucDT.ToString("s", System.Globalization.CultureInfo.InvariantCulture) + @"</Value>
                </Leq>
            </And>
        </And>
    </And>
</Where>";
                            qryTraLai.ViewFields = @"<FieldRef Name='DonVi' /><FieldRef Name='LinhVucMa' />";
                            SPListItemCollection hosoTraLaiCol = lstHoSo.GetItems(qryTraLai);
                            DataTable dtHoSoTraLaiCol = null;
                            try { dtHoSoTraLaiCol = hosoTraLaiCol.GetDataTable(); }
                            catch { }
